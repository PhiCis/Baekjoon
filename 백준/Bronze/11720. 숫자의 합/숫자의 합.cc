#include<stdio.h>
int n, i, ans;
char a;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf(" %c", &a);
		ans+=a-48;
	}
	printf("%d", ans);
}