#include<stdio.h>
int n, i, ans;
void f(int i){
	if(i<=99){
		ans++;
	}
	else if(((i/10)%10)*2==i%10+i/100){
		ans++;
	}
}
int main()
{
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		f(i);
	}
	printf("%d", ans);
}