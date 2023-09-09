#include<bits/stdc++.h>
using namespace std;

int t, n, m, k, a[101000], b[101000];
double c[101000];
char d[1010];
double e[1010], N, Y;


int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cout<<"Data Set "<<x<<":\n";
		cin>>n>>m>>k;
		for(int i=1;i<=m;i++) cin>>a[i]>>b[i]>>c[i];
		for(int i=1;i<=n;i++) cin>>d[i];
		for(int i=1;i<=1000;i++) e[i]=0;
		for(int i=1;i<=m;i++)
		{
			if(0<=k-b[i]&&k-b[i]<1000)
			{
				e[a[i]]+=c[i];
			}
		}
		N=Y=0;
		for(int i=1;i<=n;i++)
		{
			if(d[i]=='Y') Y+=1;
			else N+=1.0/(1.0+e[i]/10000);
		}
		printf("%.2lf %.2lf\n\n", Y, N);
	}
}