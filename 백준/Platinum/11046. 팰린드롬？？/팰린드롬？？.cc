#include<bits/stdc++.h>
using namespace std;

int s[1000010], t[2000020];
int a[4000040], n, m;

void manachers(int* s, int n)
{
	int r=0, p=0;
	for(int i=0;i<n;i++)
	{
		if(i<=r) a[i]=min(a[2*p-i], r-i);
		else a[i]=0;
		while(i-a[i]-1>=0 && i+a[i]+1<n && s[i-a[i]-1]==s[i+a[i]+1]) a[i]++;
		if(r<i+a[i])
		{
			r=i+a[i];
			p=i;
		}
	}
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++) cin>>s[i];
	t[0]=-1;
	for(int i=0;i<n;i++)
	{
		t[i*2+1]=s[i];
		t[i*2+2]=-1;
	}
	manachers(t, 2*n+1);
	
	cin>>m;
	while(m--)
	{
		int c, b;
		cin>>c>>b;
		c=c*2-1;
		b=b*2-1;
		int mi=c+b>>1;
		if(a[mi]>=mi-c) cout<<1;
		else cout<<0;
		cout<<"\n";
	}
}