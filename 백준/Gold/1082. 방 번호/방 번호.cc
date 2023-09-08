#include<stdio.h>
int n, i, j, c[15], m, min1=2e9, mini1, min2=2e9, mini2, a[60], digit, remain;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &c[i]);
		if(i>0&&min1>=c[i]){
			min1=c[i];
			mini1=i;
		}
	}
	min2=min1>c[0]?c[0]:min1;
	mini2=min1>c[0]?0:mini1;
	a[0]=mini1;
	scanf("%d", &m);
	if(m<min1){
		printf("0");
		return 0;
	}
	digit=(m-min1)/min2+1;
	for(i=1;i<digit;i++){
		a[i]=mini2;
	}
	remain=(m-min1)%min2;
	for(i=n-1;i>mini1;i--){
		if(c[i]-c[mini1]<=remain){
			a[0]=i;
			remain-=c[i]-c[mini1];
			break;
		}
		
	}
	for(i=1;i<digit;i++){
		for(j=n-1;j>mini2;j--){
			if(c[j]-c[mini2]<=remain){
				a[i]=j;
				remain-=c[j]-c[mini2];
				break;
			}
		}
	}
	for(i=0;i<digit;i++){
		printf("%d", a[i]);
	}
	return 0;
}