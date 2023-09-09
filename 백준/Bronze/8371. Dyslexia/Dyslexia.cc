#include<bits/stdc++.h>
using namespace std;
int n;
string a, b;
int ans;

int main()
{
	cin>>n>>a>>b;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i]) ans++;
	}
	printf("%d", ans);
}