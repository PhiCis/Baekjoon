#include<stdio.h>
#include<stdlib.h>
int n, i;
struct a{
	int s, e;
}a[25010];
int compare(const void *x, const void *y){
	struct a* prtx=(struct a*) x;
	struct a* prty=(struct a*) y;
	if(prtx->s<prtx->e){
        if(prty->s<prty->e)
        	if(prtx->s<prty->s){
        		return -1;
			}
			else return 1;
        else
            return -1;
    }
    else{
        if(prty->s>prty->e)
        	if(prtx->e<=prty->e){
        		return 1;
			}
			else return -1;
        else
            return 1;
    }
}
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %d", &a[i].s, &a[i].e);
	}
	qsort(a, n, sizeof(struct a), compare);
	for(i=0;i<n;i++){
		//printf("%d %d\n", a[i].s, a[i].e);
		if(i>0) a[i].s=a[i-1].s+a[i].s;
		if(i==0) a[i].e=a[i].s+a[i].e;
		else a[i].e=(a[i-1].e>a[i].s?a[i-1].e:a[i].s)+a[i].e;
	}
	printf("%d", a[n-1].e);
}