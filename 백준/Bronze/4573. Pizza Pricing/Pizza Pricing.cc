#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt=0;
	while(1)
	{
		cnt++;
		int n;
		cin>>n;
		vector<int> a(n), b(n);
		vector<double> c(n);
		if(!n) return 0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
			c[i]=(double)a[i]*a[i]/b[i];
		}
		double ans=0;
		for(int i=0;i<n;i++)
		{
			ans=max(ans, c[i]);
		}
		for(int i=0;i<n;i++)
		{
			if(ans==c[i]) cout<<"Menu "<<cnt<<": "<<a[i]<<"\n";
		}
	}
}