#include<bits/stdc++.h>
using namespace std;

int n, k;
int f[15];

void print(int n, int k)
{
	if(n==0) return;
	if(n==1)
	{
		cout<<1;
		return;
	}
	if(k<=f[n-1])
	{
		cout<<1;
		if(n-1>0)
		{
			cout<<"+";
			print(n-1, k);
		}
	}
	else if(k<=f[n-1]+f[n-2])
	{
		cout<<2;
		if(n-2>0)
		{
			cout<<"+";
			print(n-2, k-f[n-1]);
		}
	}
	else
	{
		cout<<3;
		if(n-3>0)
		{
			cout<<"+";
			print(n-3, k-f[n-1]-f[n-2]);
		}
	}
}

int main()
{
	f[0]=1, f[1]=1, f[2]=2;
	for(int i=3;i<15;i++)
	{
		f[i]=f[i-1]+f[i-2]+f[i-3];
	}
	cin>>n>>k;
	if(k>f[n])
	{
		cout<<-1;
		return 0;
	}
	print(n, k);
}