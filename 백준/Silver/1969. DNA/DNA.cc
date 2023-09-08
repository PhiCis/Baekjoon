#include<bits/stdc++.h>
using namespace std;

int n, m;
string s[1010];
int ans;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int j=0;j<m;j++)
	{
		int a1=0, a2=0, a3=0, a4=0;
		for(int i=1;i<=n;i++)
		{
			if(s[i][j]=='A') a1++;
			if(s[i][j]=='C') a2++;
			if(s[i][j]=='G') a3++;
			if(s[i][j]=='T') a4++;
		}
		if(max({a1, a2, a3, a4})==a1)
		{
			printf("A");
			ans+=a2+a3+a4;
		}
		else if(max({a1, a2, a3, a4})==a2)
		{
			printf("C");
			ans+=a1+a3+a4;
		}
		else if(max({a1, a2, a3, a4})==a3)
		{
			printf("G");
			ans+=a2+a1+a4;
		}
		else if(max({a1, a2, a3, a4})==a4)
		{
			printf("T");
			ans+=a2+a3+a1;
		}
	}
	printf("\n%d", ans);
}