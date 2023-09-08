#include<stdio.h>
#include<string.h>
char a[1000010];
int len, i, c[26], max, maxi, flag;
int main()
{
	scanf("%s", a);
	len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]>96) c[a[i]-97]++;
		else c[a[i]-65]++;
	}
	for(i=0;i<26;i++){
		if(max<c[i]) max=c[i];
	}
	for(i=0;i<26;i++){
		if(max==c[i]){
			flag++;
			maxi=i;
		}
	}
	if(flag>1) printf("?");
	else printf("%c", maxi+65);
}