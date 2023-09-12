#include<bits/stdc++.h>
using namespace std;
int n;
int a[10];
int ans;

int main()
{
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a+1, a+1+n);
	do
	{
		int tmp=0;
		for(int i=1;i<n;i++)
		{
			tmp+=a[i]<a[i+1]?a[i+1]-a[i]:a[i]-a[i+1];
		}
		if(ans<tmp) ans=tmp;
	}
	while(next_permutation(a+1, a+1+n));
	printf("%d", ans);
}