#include<stdio.h>
#include<math.h>
int a, b, i, flag, tmp, min, n, j, ans;
int main()
{
	scanf("%d%d", &a, &b);
	for(i=a;i<=b;i++){
		flag=0;
		if((i==1||i%2==0)&&i!=2) continue;
		for(j=3;j<=sqrt(i);j+=2){
			if(i%j==0) flag=1;
		}
		if(flag==0){
			ans+=i;
			if(tmp==0){
				min=i;
				tmp++;
			}
		}
	}
	if(min==0) printf("-1");
	else printf("%d\n%d", ans, min);
}