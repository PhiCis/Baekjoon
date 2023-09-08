#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int a[100]={0};
	int k;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	sort(a, a+n+1);
	for(int i=0;i<n;i++)
	{
		if(a[i]==k||a[i+1]==k)
		{
			printf("0");
			return 0;
		}
		else if(a[i]<k&&k<a[i+1])
		{
			printf("%d", (k-a[i])*(a[i+1]-k)-1);
			return 0;
		}
	}
}