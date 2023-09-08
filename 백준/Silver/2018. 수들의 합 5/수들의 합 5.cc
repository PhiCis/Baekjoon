#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		if(i&1)
		{
			if(n%i==0&&n/i>=(i+1)/2) ans++;
		}
		else
		{
			if(n%(i/2)==0&&n%i!=0&&n/i>=i/2) ans++;
		}
	}
	printf("%d", ans);
}