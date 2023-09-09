#include<bits/stdc++.h>
using namespace std;
int t, n;
double x, y;

int main()
{
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d", &n);
		double mx=1000, my=1000, Mx=-1000, My=-1000;
		for(int i=1;i<=n;i++)
		{
			scanf("%lf%lf", &x, &y);
			mx=min(mx, x);
			my=min(my, y);
			Mx=max(Mx, x);
			My=max(My, y);
		}
		printf("Case %d: Area %.10lf, Perimeter %.10lf\n", i, (Mx-mx)*(My-my), (Mx-mx+My-my)*2);
	}
}