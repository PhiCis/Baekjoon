#include<bits/stdc++.h>
using namespace std;

int n, a[110];
int A, B;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) a[i]*=-1;
	sort(a+1, a+n+1);
	for(int i=1;i<=n;i++) if(i&1) A-=a[i]; else B-=a[i];
	cout<<A<<" "<<B;
}