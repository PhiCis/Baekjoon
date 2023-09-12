#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		char s[1010]={0};
		char g[1010]={0};
		scanf("%[\n]%[^\n]",g, s);
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>='a'&&s[i]<='z')
			{
				s[i] = s[i]-'a'+'A';
			}
			if(s[strlen(s)-1-i]>='a'&&s[strlen(s)-1-i]<='z')
			{
				s[strlen(s)-1-i] = s[strlen(s)-1-i]-'a'+'A';
			}
			if(s[i]!=s[strlen(s)-1-i])
			{
				printf("No\n");
				goto skip;
			}
		}
		printf("Yes\n");
		skip:;
	}
}