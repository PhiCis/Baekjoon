#include<stdio.h>
#include<string.h>
int len, i, ans;
char a[1000010];
int main()
{
	fgets(a, 1000010, stdin);
	len=strlen(a);
	for(i=0;i<len-1;i++){
		if(a[i]!=' ') break;
	}
	if(i==len-1) ans--;
	for(i=1;i<len-2;i++){
		if(a[i-1]!=' '&&a[i]==' '&&a[i+1]!=' ') ans++;
	}
	printf("%d", ++ans);
}