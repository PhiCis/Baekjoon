#include<bits/stdc++.h>
using namespace std;
const double PI=3.1415926535897932;

int main()
{
	
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		int n;
		double k;
		scanf("%d%lf", &n, &k);
		for(int j=1;j<=n;j++)
		{
			double a;
			scanf("%lf", &a);
			k-=a*a*a*4*PI/3000;
		}
		if(k<0) printf("Data Set %d:\nYes\n\n", i);
		else printf("Data Set %d:\nNo\n\n", i);
	}
}