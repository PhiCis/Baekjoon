#include<bits/stdc++.h>
using namespace std;

int n;
int a[110];
vector<int> v;
long long ANS=1, ans=0;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		int tmp=a[i];
		for(int j=2;j*j<=tmp;j++)
		{
			while(tmp%j==0)
			{
				v.push_back(j);
				tmp/=j;
			}
		}
		if(tmp>1) v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for(auto i:v)
	{
//		printf("%d\n", i);
		vector<int> w;
		int sum=0;
		for(int j=1;j<=n;j++)
		{
			int tmp=a[j];
			int cnt=0;
			while(tmp%i==0)
			{
				cnt++;
				tmp/=i;
			}
			w.push_back(cnt);
			sum+=cnt;
		}
//		printf("%d\n", sum);
		sum/=n;
		for(int j=1;j<=sum;j++)
		{
			ANS*=i;
		}
		for(auto j:w)
		{
			if(sum>j) ans+=(sum-j);
		}
	}
	printf("%lld %lld", ANS, ans);
}