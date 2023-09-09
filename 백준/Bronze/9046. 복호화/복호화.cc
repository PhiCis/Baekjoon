#include<bits/stdc++.h>
using namespace std;

int n;
string s;
int c[26];
int main()
{
	scanf("%d\n", &n);
	while(n--)
	{
		getline(cin,s);
		int m = 0, M = 0;
		for(int i=0;i<26;i++)
		{
			c[i]=0;
		}
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ') continue;
			c[s[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			m = max(m, c[i]);
		}
		for(int i=0;i<26;i++)
		{
			if(c[i]==m) M++;
		}
		if(M==1)
		{
			for(int i=0;i<26;i++)
			{
				if(c[i]==m)
				{
					printf("%c\n", i+'a');
					break;
				}
			}
		}
		else
		{
			printf("?\n");
		}
	}
}