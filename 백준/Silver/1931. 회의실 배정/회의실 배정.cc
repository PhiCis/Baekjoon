#include<stdio.h>
#include<stdlib.h>
int n, i, pnt, end, ans;
struct a{
	int s ,e;
}a[100010];
int compare(const void *x, const void *y){
	struct a *X, *Y;
	X=(struct a *) x;
	Y=(struct a *) y;
	if(X->e!=Y->e) return X->e-Y->e;
	return X->s-Y->s;
}
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %d", &a[i].s, &a[i].e);
	}
	qsort(a, n, sizeof(struct a), compare);
	/*for(i=0;i<n;i++){
		printf("%d %d\n", a[i].s, a[i].e);
	}*/
	pnt=1; end=a[0].e; ans=1;
	while(pnt<n){
		if(a[pnt].s>=end){
			end=a[pnt].e;
			ans++;
		}
		pnt++;
	}
	printf("%d", ans);
}