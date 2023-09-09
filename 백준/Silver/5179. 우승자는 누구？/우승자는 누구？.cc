#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b){
	if(a.second.first!=b.second.first) return a.second.first>b.second.first;
	else return a.second.second<b.second.second;
}

int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int n, m, p;
		cout<<"Data Set "<<i<<":\n";
		cin>>m>>n>>p;
		map<pair<int, int>, int> M1, M2;
		vector<pair<int, pair<int, int> > > ans;
		for(int i=1;i<=n;i++)
		{
			int p;
			char m;
			int t, j;
			cin>>p>>m>>t>>j;
			if(M1[{p, m}]) continue;
			if(j==0) M2[{p, m}]+=20;
			else M2[{p, m}]+=t, M1[{p, m}]=1;
		}
		for(int i=1;i<=p;i++)
		{
			int id=i, num=0, sum=0;
			for(int j=0;j<m;j++)
			{
				if(M1[{i, 'A'+j}]){
					num++;
					sum+=M2[{i, 'A'+j}];
				}
			}
			ans.push_back({id, {num, sum}});
		}
		sort(ans.begin(), ans.end(), cmp);
		for(int i=0;i<p;i++)
		{
			cout<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<"\n";
		}
		cout<<"\n";
	}
}