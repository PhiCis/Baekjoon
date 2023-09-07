#include<bits/stdc++.h>
using namespace std;

int p[1000001];
vector<int> v;

int main()
{
	p[2]=1;
	for(int i=3;i<=1000000;i+=2)
	{
		p[i]=1;
	}
	for(int i=3;i<=1000;i+=2)
	{
		for(int j=i*i;j<=1000000;j+=2*i)
		{
			p[j]=0;
		}
	}
	v.push_back(2);
	for(int i=3;i<=1000000;i+=2)
	{
		if(p[i]) v.push_back(i);
	}
	int n;
	scanf("%d", &n);
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>n/4) break;
		for(int j=i;j<v.size();j++)
		{
			if(v[j]>(n-v[i])/3) break;
			for(int k=j;k<v.size();k++)
			{
				if(v[k]>(n-v[i]-v[j])/2) break;
				if(p[n-v[i]-v[j]-v[k]])
				{
					printf("%d %d %d %d", v[i], v[j], v[k], n-v[i]-v[j]-v[k]);
					return 0;
				}
			}
		}
	}
	printf("-1");
}