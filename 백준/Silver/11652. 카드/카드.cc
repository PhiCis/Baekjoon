#include<stdio.h>
#include<algorithm>
using namespace std;
long long n, cnt, M;
long long Mi;
long long a[100010];
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a, a+n);
	long long pnt=0;
	while(pnt<n)
	{
		cnt=1;
		while(a[pnt]==a[pnt+1]&&pnt<n-1)
		{
			pnt++;
			cnt++;
		}
		if(M<cnt)
		{
			M=cnt;
			Mi=a[pnt];
		}
		pnt++;
	}
	printf("%lld", Mi);
}