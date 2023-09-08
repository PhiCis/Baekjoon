#include<stdio.h>
#include<stdlib.h>
int n, i, a[500010], c[8010], ans1, ans2, max, flag;
int compare(const void *a, const void *b){
	return *(int *)a-*(int *)b;
}
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		c[a[i]+4000]++;
		ans1+=a[i];
	}
	qsort(a, n, sizeof(int), compare);
	for(i=0;i<=8000;i++){
		if(max<c[i]){
			flag=0;
			max=c[i];
			ans2=i-4000;
		}
		else if(max==c[i]){
			if(flag<1){
				flag++;
				ans2=i-4000;
			}
		}
	}
	printf("%d\n%d\n%d\n%d", ans1>0?(int)(0.5+(double)ans1/n):(int)(-0.5+(double)ans1/n), a[n/2], ans2, a[n-1]-a[0]);
}