#include<stdio.h>
#include<string.h>
char a[100], b[100], c[100];
long long ans;
int main()
{
	scanf("%s", a);
	scanf(" %s", b);
	scanf(" %s", c);
	if(!strcmp(a, "black")) ans+=0;
	if(!strcmp(a, "brown")) ans+=1;
	if(!strcmp(a, "red")) ans+=2;
	if(!strcmp(a, "orange")) ans+=3;
	if(!strcmp(a, "yellow")) ans+=4;
	if(!strcmp(a, "green")) ans+=5;
	if(!strcmp(a, "blue")) ans+=6;
	if(!strcmp(a, "violet")) ans+=7;
	if(!strcmp(a, "grey")) ans+=8;
	if(!strcmp(a, "white")) ans+=9;
	ans*=10;
	if(!strcmp(b, "black")) ans+=0;
	if(!strcmp(b, "brown")) ans+=1;
	if(!strcmp(b, "red")) ans+=2;
	if(!strcmp(b, "orange")) ans+=3;
	if(!strcmp(b, "yellow")) ans+=4;
	if(!strcmp(b, "green")) ans+=5;
	if(!strcmp(b, "blue")) ans+=6;
	if(!strcmp(b, "violet")) ans+=7;
	if(!strcmp(b, "grey")) ans+=8;
	if(!strcmp(b, "white")) ans+=9;
	if(!strcmp(c, "black")) ans*=1;
	if(!strcmp(c, "brown")) ans*=10;
	if(!strcmp(c, "red")) ans*=100;
	if(!strcmp(c, "orange")) ans*=1000;
	if(!strcmp(c, "yellow")) ans*=10000;
	if(!strcmp(c, "green")) ans*=100000;
	if(!strcmp(c, "blue")) ans*=1000000;
	if(!strcmp(c, "violet")) ans*=10000000;
	if(!strcmp(c, "grey")) ans*=100000000;
	if(!strcmp(c, "white")) ans*=1000000000;
	printf("%lld", ans);
}