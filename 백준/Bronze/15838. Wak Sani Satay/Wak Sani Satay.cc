#include<bits/stdc++.h>
using namespace std;

int n;
double a, b, c, d;
double ans;

int main()
{
	int cnt=0;
	while(1)
	{
		cnt++;
		ans=0;
		cin>>n;
		if(n==0) return 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a>>b>>c>>d;
			ans+=a*(0.80-(7.50+8.00)/85)+b*(1.00-(24.00+8.00)/85)+c*(1.20-(32.00+8.00)/85)+d*(0.80-0.20);
		}
		printf("Case #%d: RM%.2lf\n", cnt, ans);
	}
}