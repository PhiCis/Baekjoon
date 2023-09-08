#include<stdio.h>
#include<string.h>
int t, i, j, n, k, len;
char a[20];
int main()
{
	scanf("%d", &t);
	for(i=0;i<t;i++){
		scanf("%d ",&n);
		scanf("%s", a);
		len=strlen(a);
		for(j=0;j<len;j++){
			for(k=0;k<n;k++){
				printf("%c", a[j]);
			}
			a[j]=0;
		}
		printf("\n");
	}
}