#include<bits/stdc++.h>
using namespace std;
#define int long long

string a;
int t;

main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cin>>a;
		for(int i=0;i<a.size();i++)
		{
			for(int j=i+1;j<a.size();j++)
			{
				if(a[j]>=a[j-1]) goto skip;
			}
			cout<<"The longest decreasing suffix of "<<a<<" is ";
			for(int j=i;j<a.size();j++) cout<<a[j];
			cout<<"\n";
			break;
			skip:;
		}
	}
}