#include<stdio.h>
int i, n, a[43], ans;
int main()
{
	for(i=0;i<10;i++){
		scanf("%d", &n);
		a[n%42]++;
	}
	for(i=0;i<42;i++){
		if(a[i]) ans++;
	}
	printf("%d", ans);
}