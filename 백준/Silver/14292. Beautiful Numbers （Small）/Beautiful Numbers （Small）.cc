#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		int n;
		cin>>n;
		for(int i=2;i<n;i++)
		{
			int tmpn=n;
			while(tmpn)
			{
				if(tmpn%i!=1) goto skip; 
				tmpn/=i;
			}
			cout<<"Case #"<<z<<": "<<i<<"\n";
			break;
			skip:;
		}
		
	}
}