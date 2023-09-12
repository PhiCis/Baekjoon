#include<bits/stdc++.h>
using namespace std;

int n, k;

int a, b, A[10], ans;

int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &b, &a);
		if(b==0)
		{
			if(a<=2) A[0]++;
			else if(a<=4) A[1]++;
			else A[2]++;
		}
		if(b==1)
		{
			if(a<=2) A[0]++;
			else if(a<=4) A[3]++;
			else A[4]++;
		}
	}
	for(int i=0;i<5;i++)
	{
		ans+=(A[i]+k-1)/k;
	}
	printf("%d", ans);
}