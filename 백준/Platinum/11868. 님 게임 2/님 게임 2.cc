#include<bits/stdc++.h>
using namespace std;
int n, a, ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		ans^=a;
	}
	printf(ans?"koosaga":"cubelover");
}