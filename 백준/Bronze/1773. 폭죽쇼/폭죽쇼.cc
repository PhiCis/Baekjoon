#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, c, ans = 0;
	scanf("%d%d", &n, &c);
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &v[i]);
	}
	sort(v.begin(), v.end());
	for(int i=1;i<=c;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i%v[j]==0)
			{
				ans++;
				break;
			}
		}
	}
	printf("%d", ans);
}