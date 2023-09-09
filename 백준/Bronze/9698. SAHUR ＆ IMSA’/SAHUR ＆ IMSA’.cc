#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, h, m;
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d", &h, &m);
		int time = (h*60+m-45+1440)%1440;
		printf("Case #%d: %d %d\n", i, time/60, time%60);
	}
}