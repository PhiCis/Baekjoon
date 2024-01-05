#include<bits/stdc++.h>
using namespace std;

long long n;
double a[1000010], b[1000010];

int main()
{
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a[i]>>b[i];
		}
		a[n+1]=a[1], b[n+1]=b[1];
		cout<<n<<" ";
		for(int i=1;i<=n;i++)
		{
			printf("%.6lf %.6lf ", (a[i]+a[i+1])/2, (b[i]+b[i+1])/2);
		}
		cout<<"\n";
	}
}