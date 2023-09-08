#include<stdio.h>
int n, a[1010], i, pnt;
int main()
{
	scanf("%d", &n);
	if(n==0)
	{
		printf("0");
		return 0;
	}
	while(n!=1)
	{
		if(n<0&&n&1){
			a[++pnt]=n-(n/(-2)+1)*(-2);
			n=n/(-2)+1;
		}
		else{
			a[++pnt]=n-(n/(-2))*(-2);
			n=n/(-2);
		}
		//printf("%d\n", n);
	}
	a[++pnt]=1;
	for(i=pnt;i>0;i--)
	{
		printf("%d", a[i]);
	}
}