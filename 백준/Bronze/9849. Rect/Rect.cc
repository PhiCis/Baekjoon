#include<bits/stdc++.h>
using namespace std;

int x1, x2=10000, Y1, y2=10000;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		x1=max(x1, a);
		x2=min(x2, b);
		Y1=max(Y1, c);
		y2=min(y2, d);
	}
	printf("%d", max(0, x2-x1)*max(0, y2-Y1));
}