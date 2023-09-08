#include<stdio.h>
#include<stdlib.h>
long long int n, m, a[1000010], i;
long long int b[1000010];
int compare(const void *a, const void *b){
	return *(long long int*)b-*(long long int*)a;
}
int main()
{
	scanf("%lld%lld", &n, &m);
	for(i=0;i<n;i++){
		scanf("%lld", &a[i]);
	}
	qsort(a, n, sizeof(long long int), compare);
	for(i=1;i<=n;i++){
		b[i]=b[i-1]+(a[i-1]-a[i])*i;
		if(b[i-1]<=m&&b[i]>m) break;
	}
	if(m==b[i-1]) printf("%lld", a[i-1]);
	else printf("%lld", a[i-1]-((m-b[i-1]-1)/i+1));
}