#include<stdio.h>
int t, i, cnt, j, n;
int ans, a[1010];
int main()
{
	scanf("%d", &t);
	for(i=0;i<t;i++){
		ans=0;cnt=0;
		scanf("%d", &n);
		for(j=0;j<n;j++){
			scanf("%d", &a[j]);
			ans+=a[j];
		}
		for(j=0;j<n;j++){
			if(ans<a[j]*n) cnt++;
		}
		printf("%.3lf%%\n", (double)cnt*100/n);
	}
}