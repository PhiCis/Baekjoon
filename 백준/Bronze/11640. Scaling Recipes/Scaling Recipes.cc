#include<bits/stdc++.h>
using namespace std;

int t, r, p, d;
string a[30];
double b[30], c[30];
double A;
int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cin>>r>>p>>d;
		for(int i=1;i<=r;i++)
		{
			cin>>a[i]>>b[i]>>c[i];
			if(c[i]==100.0)
			{
				A=b[i]/p*d;
			}
		}
		cout<<"Recipe # "<<x<<"\n";
		for(int i=1;i<=r;i++)
		{
			cout<<a[i]<<" ";
			printf("%.1lf\n", A*c[i]/100.0);
		}
		cout<<"----------------------------------------\n";
	}
}