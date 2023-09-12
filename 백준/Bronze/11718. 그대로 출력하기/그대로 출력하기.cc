#include<stdio.h>
#include<string.h>
char a[110][110];
int len, i, k;
int main()
{
	while(fgets(a[k], 105, stdin)){
		len=strlen(a[k]);
		for(i=0;i<len;i++){
			printf("%c", a[k][i]);
		}
		k++;
	}
}