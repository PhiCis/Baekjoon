#include<bits/stdc++.h>
using namespace std;

int n;
char a[10010], b[10010];
int ans;

int main()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	for(int i=0;i<n;i++) if(a[i]==b[i]) ans++;
	cout<<ans;
}