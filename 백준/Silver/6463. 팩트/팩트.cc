#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		printf("%5d -> ", n);
		long long tmp=1;
		for(int i=1;i<=n;i++)
		{
			tmp*=i;
			while(tmp%10==0) tmp/=10;
			tmp%=1000000000;
		}
		printf("%d\n", tmp%10);
	}
}