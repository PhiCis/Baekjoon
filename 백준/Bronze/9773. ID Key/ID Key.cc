#include<bits/stdc++.h>
using namespace std;

int n;
long long a;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		int b=a%1000*10;
		while(a)
		{
			b+=a%10;
			a/=10;
		}
		if(b<1000) b+=1000;
		printf("%04d\n", b%10000);
	}
}