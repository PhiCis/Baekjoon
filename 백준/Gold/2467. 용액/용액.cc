#include<bits/stdc++.h>
using namespace std;
#define INF 2e9

int n, a[100010];
int ans=INF, a1, a2;

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	int s=0, e=n-1;
	while(s<e)
	{
		if(abs(a[s]+a[e])<ans)
		{
			ans=abs(a[s]+a[e]);
			a1=a[s], a2=a[e];
		}
		
		if(a[s]+a[e]>=0)
		{
			e--;
		}
		else
		{
			s++;
		}
	}
	printf("%d %d", a1, a2);
}