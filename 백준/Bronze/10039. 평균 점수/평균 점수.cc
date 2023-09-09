#include<stdio.h>
int i, a, ans;
int main()
{
	for(i=0;i<5;i++){
		scanf("%d", &a);
		if(a<40) ans+=40;
		else ans+=a;
	}
	printf("%d", ans/5);
}