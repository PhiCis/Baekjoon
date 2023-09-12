#include<stdio.h>
#include<string.h>
char a[110];
int main()
{
	fgets(a, 110, stdin);
	for(int i=0;i<strlen(a);i++){
		if((a[i]>=65&&a[i]<=90)){
			a[i]=(a[i]+13)>90?a[i]-13:a[i]+13;
		}
		if((a[i]>=97&&a[i]<=122)){
			a[i]=(a[i]+13)>122?a[i]-13:a[i]+13;
		}
		printf("%c", a[i]);
	}
	
}