#include<bits/stdc++.h>
using namespace std;
char a[110];
int main()
{
	scanf("%s", a);
	if(a[0]>='A'&&a[0]<='Z')
	{
		printf("Error!");
		return 0;
	}
	if(a[0]=='_'||a[strlen(a)-1]=='_')
	{
		printf("Error!");
		return 0;
	}
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='_') goto cpp;
		if(a[i]>='A'&&a[i]<='Z') goto java;
	}
cpp:
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			printf("Error!");
			return 0;
		}
	}
	for(int i=1;i<strlen(a);i++)
	{
		if(a[i]=='_'&&a[i-1]=='_')
		{
			printf("Error!");
			return 0;
		}
	}
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='_')
		{
			a[i+1]+='A'-'a';
		}
		else printf("%c", a[i]);
	}
	return 0;
java:
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='_')
		{
			printf("Error!");
			return 0;
		}
	}
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			printf("_%c", a[i]+'a'-'A');
		}
		else printf("%c", a[i]);
	}
}