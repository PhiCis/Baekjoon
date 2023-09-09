#include<stdio.h>
int n, i, a, b, c;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d", &a, &b, &c);
		if(b-c>a) printf("advertise\n");
		if(b-c==a) printf("does not matter\n");
		if(b-c<a) printf("do not advertise\n");
	}
}