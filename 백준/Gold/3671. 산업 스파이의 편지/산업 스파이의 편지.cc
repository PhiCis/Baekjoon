#include<bits/stdc++.h>
using namespace std;

bool p[10000020];

int main()
{
	p[2]=1;
	for(int i=3;i<=10000000;i+=2)
	{
		p[i]=1;
	}
	for(int i=3;i<=3200;i+=2)
	{
		for(int j=i*i;j<=10000000;j+=2*i)
		{
			p[j]=0;
		}
	}
	int n;
	scanf("%d", &n);
	while(n--)
	{
		string a;
		map<int, bool> m;
		cin>>a;
		vector<int> v;
		for(int i=0;i<a.size();i++)
		{
			v.push_back(a[i]-'0');
		}
		sort(v.begin(), v.end());
		do
		{
			int tmp = 0;
//			for(int i=0;i<v.size();i++)
//			{
//				printf("%d ", v[i]);
//			}
//			printf("\n");
			for(int i=0;i<v.size();i++)
			{
				tmp*=10;
				tmp+=v[i];
				if(p[tmp]) m[tmp]=true;
			}
		}while(next_permutation(v.begin(), v.end()));
		printf("%d\n", m.size());
	}
}