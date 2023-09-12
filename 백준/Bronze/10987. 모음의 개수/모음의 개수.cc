#include<stdio.h>
#include<string.h>
char a[1010];
int ans;
int main()
{
	scanf("%s", a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u') ans++;
	}
	printf("%d", ans);
}