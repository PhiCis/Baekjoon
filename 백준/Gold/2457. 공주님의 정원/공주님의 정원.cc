#include<stdio.h>
#include<stdlib.h>
typedef struct rng{
	int fr_mm;
	int fr_dd;
	int to_mm;
	int to_dd;
}RNG;

typedef struct day{
	int fr;
	int to;
}DAY;

int compare(const void *A, const void *B)
{
    DAY* numA = (DAY*)A;
	DAY* numB = (DAY*)B;
	return (numA->fr) - (numB->fr);
}
RNG a[100005];
DAY b[100005];
DAY tmp;
int main()
{
	int i, j, n, date, chk, max, ans, tmp_fr, tmp_to;
	int month[13]={0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		scanf("%d%d%d%d", &a[i].fr_mm, &a[i].fr_dd, &a[i].to_mm, &a[i].to_dd);
		tmp_fr=a[i].fr_mm; tmp_to=a[i].to_mm;
		b[i].fr=month[tmp_fr]+a[i].fr_dd;
		b[i].to=month[tmp_to]+a[i].to_dd;
 	}
	/*printf("---------기존---------\n");
	for(i=1;i<=n;i++){
		printf("%d %d\n", b[i].fr, b[i].to);
	}*/
	qsort(b, n+1, sizeof(DAY), compare);
	/*printf("---------나중---------\n");
	for(i=1;i<=n;i++){
		printf("%d %d\n", b[i].fr, b[i].to);
	}*/
	ans=0;
	chk=1;
	date=60;
  	while(date<335){
 	 	max=date;
   		while(b[chk].fr<=date){
    		if(chk>n) break;
    		if(b[chk].to>max) max=b[chk].to;
		   	chk++;
		}
		if(max==date){
			printf("0");
			return 0;
		}
		date=max;
		ans++;
	}
	printf("%d", ans);
	return 0;
}