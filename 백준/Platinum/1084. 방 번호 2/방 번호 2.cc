#include<stdio.h>
long long n, i, a[15], min2=2e18, c[15], d[15], mini2, min1=2e18, mini1, m, digit, remain, j, k, pnt;
int main()
{
	while(scanf("%lld", &n)==1){
		for(i=0;i<n;i++){
			scanf("%lld", &c[i]);
			if(min2>=c[i]){//0~n-1 중 최솟값  
				min2=c[i];
				mini2=i;
			} 
			if(i>0&&min1>=c[i]){//1~n-1 중 최솟값 
				min1=c[i];
				mini1=i;
			}
		}
		scanf("%lld", &m);
		if(m<min2){
			printf("0\n\n\n");
			continue;
		}
		if(m<min1){
			printf("1\n0\n0\n");
			continue;
		}
		digit=(m-min1)/min2+1;
		a[mini1]+=1;
		a[mini2]+=(m-min1)/min2;
		remain=(m-min1)%min2;
		for(i=n-1;i>mini1;i--){
			if(c[i]-c[mini1]<=remain){
				a[i]+=1;
				a[mini1]-=1;
				remain-=c[i]-c[mini1];
				break;
			}
		}
		for(i=n-1;i>mini2;i--){
			if(c[i]-c[mini2]<=remain){
				if(a[mini2]<remain/(c[i]-c[mini2])){
					a[i]+=a[mini2];
					a[mini2]=0;
					remain-=a[mini2]*(c[i]-c[mini2]);
				}
				else{
					a[mini2]-=remain/(c[i]-c[mini2]);
					a[i]+=remain/(c[i]-c[mini2]);
					remain%=(c[i]-c[mini2]);
				}
			}
		}
		printf("%lld\n", digit);
		if(digit<=50){
			for(i=1;i<=2;i++){
				for(j=n-1;j>=0;j--){
					for(k=1;k<=a[j];k++){
						printf("%lld", j);
					}
				}
				printf("\n");
			}
		}
		else{
			pnt=50;
			for(i=n-1;i>=0;i--){
				if(a[i]>pnt){
					for(j=1;j<=pnt;j++){
						printf("%lld", i);
					}
					pnt=0;
					printf("\n");
					break;
				}
				else{
					for(j=1;j<=a[i];j++){
						printf("%lld", i);
					}
					pnt-=a[i];
				}
			}
			pnt=50;
			for(i=0;i<n;i++){
				if(a[i]>pnt){
					d[i]+=pnt;
					pnt=0;
					break;
				}
				else{
					d[i]+=a[i];
					pnt-=a[i];
				}
			}
			for(i=n-1;i>=0;i--){
				for(j=1;j<=d[i];j++){
					printf("%lld", i);
				}
			}
			printf("\n");
		}
		for(i=0;i<n;i++){
			a[i]=c[i]=d[i]=0;
		}
		min1=min2=2e18;
	}
}