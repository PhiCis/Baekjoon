#include<bits/stdc++.h>
using namespace std;

int n, m, a[200020];
int main()
{
	cin>>n>>m;
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a+1, a+n);
	if(m<a[1]) cout<<n;
	else if(m>a[n-1]) cout<<1;
	else{
		for(int i=1;i<n-1;i++)
		{
			if(a[i]<m && m<a[i+1]) cout<<n-i;
		}
	}
}