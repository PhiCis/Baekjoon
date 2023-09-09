#include<stdio.h>
int a, b;
int main()
{
    scanf("%d %d", &a, &b);
    if((a&1)^(b&1)||a<b) printf("-1");
    else printf("%d\n%d", (a+b)/2, (a-b)/2);
}