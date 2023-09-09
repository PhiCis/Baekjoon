#include<stdio.h>
int n, t, dp[30]={0, 1, 2, 4,};
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		for(int i=4;i<=t;i++){
			dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
		}
		printf("%d\n", dp[t]);
	}
}