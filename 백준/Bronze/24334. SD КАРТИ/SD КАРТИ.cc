#include<bits/stdc++.h>
using namespace std;
int n, a, b, ans;
double ANS=2e9;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		ans+=a*60+b;
	}
	for(int i=0;i<=100;i++)
	{
		for(int j=0;j<=100;j++)
		{
			if(i*240+j*180>=ans)
			{
				ANS=min(ANS, 10.90*i+9.15*j);
			}
		}
	}
	printf("%.2lf", ANS);
}