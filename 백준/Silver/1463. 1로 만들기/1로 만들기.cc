#include<stdio.h>
int a[1000010], n, i;
int main()
{
	scanf("%d", &n);
	for(i=2;i<=n;i++){
		if(i%6==0) a[i]=((a[i-1]<a[i/2]?a[i-1]:a[i/2])<a[i/3]?(a[i-1]<a[i/2]?a[i-1]:a[i/2]):a[i/3])+1;
		else if(i%3==0) a[i]=(a[i-1]<a[i/3]?a[i-1]:a[i/3])+1;
		else if(i%2==0) a[i]=(a[i-1]<a[i/2]?a[i-1]:a[i/2])+1;
		else a[i]=a[i-1]+1;
	}
	printf("%d", a[n]);
}