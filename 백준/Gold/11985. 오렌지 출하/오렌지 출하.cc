#include<stdio.h>
long long max(long long a, long long b){
	return a>b?a:b;
}
long long min(long long a, long long b){
	return a<b?a:b;
}
long long n, m, k, i, j, a[20202], dp[20202], maximum, minimum;
int main()
{
	scanf("%lld %lld %lld", &n, &m, &k);
	for(i=1;i<=n;i++){
		scanf("%lld", &a[i]);
	}
	for(i=1;i<=n;i++){
		dp[i]=1e18;
		maximum=0;
		minimum=1e18;
		for(j=i;j>=max(i-m+1, 1);j--){
			maximum=max(maximum, a[j]);
			minimum=min(minimum, a[j]);
			dp[i]=min(dp[i], dp[j-1]+k+(i-j+1)*(maximum-minimum));
		}
	}
	printf("%lld", dp[n]);
}