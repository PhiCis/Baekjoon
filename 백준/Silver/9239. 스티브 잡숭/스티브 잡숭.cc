#include<bits/stdc++.h>
using namespace std;

bool g(long long a, long long b)
{
	return to_string(a).size()==b;
}
double A;
long long a;
long long flag;
long long e10[8]={1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};
int main()
{
	scanf("%lf", &A);
	a=(int)(A*10000);
	if(a==10000)
	{
		printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n");
	}
	if(a<100000)
	for(long long k=1;k<=7;k++)
	{
		for(long long x=1;x<=9;x++)
		{
			if((e10[k]*a-10000)*x%(100000-a)==0 && g((e10[k]*a-10000)*x/(100000-a), k))
			{
				flag++;
				printf("%lld%lld\n",x, (e10[k]*a-10000)*x/(100000-a));
			}
		}
	}
	if(flag==0)
	{
		printf("No solution\n");
	}
}