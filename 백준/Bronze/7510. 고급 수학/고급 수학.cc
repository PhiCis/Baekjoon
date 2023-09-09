#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		vector<int> a(3);
		scanf("%d%d%d", &a[0], &a[1], &a[2]);
		sort(a.begin(), a.end());
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
		{
			printf("Scenario #%d:\nyes\n\n", i);
		}
		else
		{
			printf("Scenario #%d:\nno\n\n", i);
		}
	}
}