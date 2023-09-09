#include<bits/stdc++.h>
using namespace std;

int c[30];
int ans;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		string a;
		cin>>a;
		c[a[0]-'A']++;
	}
	for(int i=0;i<26;i++)
	{
		if(c[i]) ans++;
		else break;
	}
	printf("%d\n", ans);
}