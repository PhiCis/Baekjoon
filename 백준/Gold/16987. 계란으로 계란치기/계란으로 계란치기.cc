#include<bits/stdc++.h>
using namespace std;

int n, a[10], b[10];
int ans;

void f(int i, int k)
{
//	cout<<i<<" "<<k<<"\n";
	if(i==n)
	{
		ans=max(ans, k);
		return;
	}
	if(a[i]<=0)
	{
		f(i+1, k);
		return;
	}
	int flag=0;
	for(int j=0;j<n;j++)
	{
		if(i==j) continue;
		if(a[j]<=0) continue;
		flag=1;
		int tmp=0;
		a[j]-=b[i];
		a[i]-=b[j];
		if(a[i]<=0) tmp++;
		if(a[j]<=0) tmp++;
		f(i+1, k+tmp);
		a[j]+=b[i];
		a[i]+=b[j];
	}
	if(flag==0) f(i+1, k);
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	f(0, 0);
	cout<<ans;
}