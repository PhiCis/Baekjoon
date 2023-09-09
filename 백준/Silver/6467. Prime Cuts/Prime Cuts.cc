#include<bits/stdc++.h>
using namespace std;

int p[1010];

int main()
{
	p[1]=1;
	for(int i=2;i<=1000;i++)
	{
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				goto skip;
			}
		}
		p[i]=1;
		skip:;
	}
	int a, b;
	while(cin>>a>>b)
	{
		cout<<a<<" "<<b<<": ";
		int tmp=0;
		int cnt=0;
		for(int i=1;i<=a;i++)
		{
			if(p[i]) tmp++;
		}
		for(int i=1;i<=a;i++)
		{
			if(p[i])
			{
				cnt++;
				if((tmp+3)/2-b<=cnt&&cnt<=tmp/2+b) cout<<i<<" ";
			}
		}
		cout<<"\n\n";
	}
}