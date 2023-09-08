#include<stdio.h>
#include<algorithm>
using namespace std;
int n, k;
int f2(int i)
{
	int ans=0;
	while(i)
	{
		ans+=i/2;
		i/=2;
	}
	return ans;
}
int f5(int i)
{
	int ans=0;
	while(i)
	{
		ans+=i/5;
		i/=5;
	}
	return ans;
}
int main()
{
	scanf("%d %d", &n, &k);
	printf("%d", min(f2(n)-f2(n-k)-f2(k), f5(n)-f5(n-k)-f5(k)));
}