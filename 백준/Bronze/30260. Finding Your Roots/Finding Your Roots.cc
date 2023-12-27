#include<bits/stdc++.h>
using namespace std;
int t, k, n, p[10100];
int main()
{
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cout<<"Data Set "<<i<<":\n";
		cin>>k>>n;
		for(int j=1;j<=n;j++)
		{
			cin>>p[j];
		}
		int cnt=1;
		while(p[k]) k=p[k], cnt++;
		cout<<cnt<<"\n\n";
	}
}