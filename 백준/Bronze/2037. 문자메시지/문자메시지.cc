#include<bits/stdc++.h>
using namespace std;

int c[26]={2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
int d[26]={1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
int ans = 0;

int main()
{
	int p, w;
	string s;
	scanf("%d%d\n", &p, &w);
	getline(cin, s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ') ans+=p;
		else
		{
			if(i>=1 && c[s[i]-'A']==c[s[i-1]-'A']) ans+=w;
			ans+=d[s[i]-'A']*p;
		}
	}
	printf("%d", ans);
}