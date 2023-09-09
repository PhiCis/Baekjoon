#include<bits/stdc++.h>
using namespace std;
vector<char> s[110];
int n, ans;
char a[110][100010];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf(" %s", a[i]);
		int len=strlen(a[i]);
		for(int j=0;j<len;j++)
		{
			if(s[i].empty()||s[i].back()!=a[i][j]) s[i].push_back(a[i][j]);
			else s[i].pop_back();
		}
		if(s[i].empty()) ans++;
	}
	printf("%d", ans);
}