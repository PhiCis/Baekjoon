#include<bits/stdc++.h>
using namespace std;

int s, f, m;

int main()
{
	cin>>s>>f>>m;
	for(int i=m;i>=2;i--)
	{
		int tmp=i;
		vector<pair<int, int> > v;
		for(int j=2;j*j<=tmp;j++)
		{
			if(tmp%j==0)
			{
				int cnt=0;
				while(tmp%j==0) tmp/=j, cnt++;
				v.push_back({j, cnt});
			}
		}
		if(tmp>1) v.push_back({tmp, 1});
		for(auto u:v)
		{
			int ans=0;
			int tmp1=s+f, tmp2=s, tmp3=f;
			while(tmp1|tmp2|tmp3)
			{
				ans+=tmp1/u.first-tmp2/u.first-tmp3/u.first;
				tmp1/=u.first;
				tmp2/=u.first;
				tmp3/=u.first;
			}
			if(ans<u.second) goto skip;
		}
		cout<<i;
		return 0;
		skip:;
	}
	cout<<1;
}