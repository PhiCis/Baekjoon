#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tmp = 0, a;
	map<int, int> m;
	int ans = 0, ansi;
	for(int i=1;i<=10;i++)
	{
		scanf("%d", &a);
		tmp+=a;
		m[a]++;
		if(m[a]>ans)
		{
			ans = m[a];
			ansi = a;
		}
	}
	printf("%d\n%d", tmp/10, ansi);
}