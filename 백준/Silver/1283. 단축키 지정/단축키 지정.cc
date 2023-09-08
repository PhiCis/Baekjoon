#include<bits/stdc++.h>
using namespace std;
int n, c[26];
int main()
{
	scanf("%d\n", &n);
	while(n--)
	{
		char a[100]={0};
		fgets(a, 100, stdin);
		if(c[a[0]>='a'?a[0]-'a':a[0]-'A']==0)
		{
			c[a[0]>='a'?a[0]-'a':a[0]-'A']++;
			for(int i=0;i<strlen(a);i++)
			{
				if(i==0) printf("[%c]", a[i]);
				else printf("%c", a[i]);
			}
			goto skip;
		}
		for(int i=1;i<strlen(a)-1;i++)
		{
			if(a[i-1]==' '&&c[a[i]>='a'?a[i]-'a':a[i]-'A']==0)
			{
				c[a[i]>='a'?a[i]-'a':a[i]-'A']++;
				for(int j=0;j<strlen(a);j++)
				{
					if(j==i) printf("[%c]", a[j]);
					else printf("%c", a[j]);
				}
				goto skip;
			}
		}
		for(int i=1;i<strlen(a)-1;i++)
		{
			if(a[i]!=' '&&c[a[i]>='a'?a[i]-'a':a[i]-'A']==0)
			{
				c[a[i]>='a'?a[i]-'a':a[i]-'A']++;
				for(int j=0;j<strlen(a);j++)
				{
					if(j==i) printf("[%c]", a[j]);
					else printf("%c", a[j]);
				}
				goto skip;
			}
		}
		for(int i=0;i<strlen(a);i++)
		{
			printf("%c", a[i]);
		}
		skip:;
	}
}