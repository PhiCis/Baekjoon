#include<stdio.h>
int n, ans=1;
void f(int n, int s, int e){
	if(n<=0) return;
	f(n-1, s, 6-s-e);
	printf("%d %d\n", s, e);
	f(n-1, 6-s-e, e);
}
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		ans*=2;
	}
	printf("%d\n", ans-1);
	f(n, 1, 3);
}