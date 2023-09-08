#include<bits/stdc++.h>
using namespace std;

string s, a[13]={"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D+", "D0", "D-", "F"};
double d[13]={4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7, 0.0};

int n;
double ans, ans2;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		string x, z;
		int y;
		
		cin>>x>>y>>z;
		ans2+=y;
		for(int j=0;j<13;j++)
		{
			if(z==a[j])
			{
				ans+=y*d[j];
			}
		}
	}
	printf("%.2lf", (double)round(ans/ans2*100)/100);
}