#include<bits/stdc++.h>
using namespace std;

class P{
public:
	P()
	{
		this->x=0;
		this->y=0;
	}
	P(double x, double y)
	{
		this->x=x;
		this->y=y;
	}
	double operator+(P p)
	{
		return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
	}
private:
	double x, y;
};

P p[1010];
int n;
double x, y;
int t, m, a[1010];
double ans;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		p[i]={x, y};
	}
	cin>>t;
	while(t--)
	{
		cin>>m;
		for(int i=1;i<=m;i++) cin>>a[i];
		ans=0;
		for(int i=2;i<=m;i++) ans+=(p[a[i]]+p[a[i-1]]);
		printf("%.0lf\n", ans);
//		cout<<ans<<"\n";
	}
}