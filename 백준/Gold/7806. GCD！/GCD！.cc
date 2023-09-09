#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	while(cin>>n>>k)
	{
		vector<int> v;
		int tmp=k;
		for(int i=2;i*i<=tmp;i++)
		{
			while(tmp%i==0)
			{
				v.push_back(i);
				tmp/=i;
			}
		}
		if(tmp>1) v.push_back(tmp);
		v.erase(unique(v.begin(), v.end()), v.end());
		int ANS=1;
		for(auto i:v)
		{
			int ans1=0;
			int tmp=n;
			while(tmp)
			{
				ans1+=tmp/i;
				tmp/=i;
			}
			int ans2=0;
			tmp=k;
			while(tmp%i==0)
			{
				ans2++;
				tmp/=i;
			}
			for(int j=1;j<=min(ans1, ans2);j++)
			{
				ANS*=i;
			}
		}
		printf("%d\n", ANS);
	}
}