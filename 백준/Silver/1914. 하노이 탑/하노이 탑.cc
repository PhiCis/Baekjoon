#include<bits/stdc++.h>
using namespace std;

void f(int n, int a, int b){
	if(n<=0) return;
	f(n-1, a, 6-a-b);
	printf("%d %d\n", a, b);
	f(n-1, 6-a-b, b);
}

int main()
{
	int n;
	scanf("%d", &n);
	__int128_t ans = 1;
	for(int i=1;i<=n;i++)
	{
		ans*=2;
	}
	ans-=1;
	if(ans/(long long)1000000000000000000!=0){
		printf("%lld", (long long)(ans/(long long)1000000000000000000));
		printf("%018lld\n", (long long)(ans%(long long)1000000000000000000));
	}
	else{
		printf("%lld\n", (long long)(ans%(long long)1000000000000000000));
	}
	if(n<=20){
		f(n, 1, 3);
	}
}