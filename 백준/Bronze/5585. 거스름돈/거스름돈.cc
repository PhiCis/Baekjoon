#include<stdio.h>
int k, i, a[11]={500, 100, 50, 10, 5, 1,}, pnt, ans;
int main()
{
	scanf("%d", &k);
	k=1000-k;
	pnt=0;
	while(k){
		if(a[pnt]<=k){
			ans+=k/a[pnt];
			k%=a[pnt];
		}
		pnt++;
	}
	printf("%d", ans);
}