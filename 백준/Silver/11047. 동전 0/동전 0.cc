#include<stdio.h>
int n, k, i, a[11], pnt, ans;
int main()
{
	scanf("%d %d", &n, &k);
	for(i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	pnt=n;
	while(k){
		if(a[pnt]<=k){
			ans+=k/a[pnt];
			k%=a[pnt];
		}
		pnt--;
	}
	printf("%d", ans);
}