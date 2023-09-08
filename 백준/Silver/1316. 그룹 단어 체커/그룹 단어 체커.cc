#include<stdio.h>
#include<string.h>
int n, i, len, j, ans, c[26];
char a[110];
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<26;j++){
			c[j]=0;
		}
		scanf("%s", a);
		len=strlen(a);
		c[a[0]-97]++;
		for(j=1;j<len;j++){
			if(a[j]!=a[j-1]&&c[a[j]-97]!=0) goto skip;
			else c[a[j]-97]++;
		}
		ans++;
		skip:;
	}
	printf("%d", ans);
}