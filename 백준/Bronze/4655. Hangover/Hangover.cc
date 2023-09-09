#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a;
	while(1)
	{
		scanf("%lf", &a);
		if(a==0) return 0;
		double cnt=0;
		int ans=0;
		while(cnt<a)
		{
			ans++;
			cnt+=1.0/(ans+1);
		}
		printf("%d card(s)\n", ans);
	}
}