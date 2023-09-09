#include<bits/stdc++.h>
using namespace std;

long long e[11]={1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000};
long long n, m;
long long ans1[1000010], ans2[1000010];
long long ANS;

int main()
{
	scanf("%lld%lld", &n, &m);
	for(int i=0;i<e[(n/2+1)/2];i++)
	{
		long long tmp = i;
		for(int j=0;j<n/4;j++){
			tmp+=(i%e[j+1]/e[j])*e[n/2-1-j];
		}
//		printf("%d\n", tmp);
		if(tmp/e[n/2-1]) ans1[tmp%m*e[n/2]%m]++;
		ans2[tmp%m]++;
	}
	ANS+=ans1[0]*ans2[0];
	for(int i=1;i<m;i++)
	{
		ANS+=ans1[i]*ans2[m-i];
	}
	printf("%lld", ANS);
}