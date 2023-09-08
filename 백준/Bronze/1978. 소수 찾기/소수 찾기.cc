#include<stdio.h>
#include<math.h>
int t, i, flag, n, j, ans;
int main()
{
	scanf("%d", &t);
	for(i=0;i<t;i++){
		flag=0;
		scanf("%d", &n);
		if((n==1||n%2==0)&&n!=2) continue;
		for(j=3;j<=sqrt(n);j+=2){
			if(n%j==0) flag=1;
		}
		if(flag==0) ans++;
	}
	printf("%d", ans);
}