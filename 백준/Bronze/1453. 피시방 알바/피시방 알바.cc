#include<bits/stdc++.h>
using namespace std;

map<int, int> m;
int n, a, ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		if(m[a]==1)
		{
			ans++;
		}
		else
		{
			m[a]=1;
		}
	}
	printf("%d", ans);
}