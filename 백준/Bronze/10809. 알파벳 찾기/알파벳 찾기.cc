#include<stdio.h>
#include<string.h>
int i, j, a[26], len;
char c[100];
int main()
{
	for(i=0;i<26;i++){
		a[i]=-1;
	}
	scanf("%s", c);
	len=strlen(c);
	for(i=0;i<len;i++){
		if(a[(int)c[i]-97]==-1) a[(int)c[i]-97]=i;
	}
	for(i=0;i<26;i++){
		printf("%d ", a[i]);
	}
}