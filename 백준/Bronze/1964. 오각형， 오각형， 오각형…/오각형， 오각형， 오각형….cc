#include<bits/stdc++.h>
using namespace std;

int ans = 1;
int tmp = 1;
int n;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		tmp+=3;
		ans+=tmp;
		tmp%=45678;
		ans%=45678;
	}
	printf("%d", ans);
}