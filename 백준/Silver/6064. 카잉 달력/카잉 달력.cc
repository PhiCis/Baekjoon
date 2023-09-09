#include<stdio.h>
int n, i, a, b, c, d;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d%d", &a, &b, &c, &d);
		while(c!=d&&c<=a*b&&d<=a*b)
		{
			if(c<d) c+=a;
			else d+=b;
		}
		if(c==d) printf("%d\n", c);
		else printf("-1\n");
	}
}