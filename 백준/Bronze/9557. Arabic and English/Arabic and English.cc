#include<bits/stdc++.h>
using namespace std;

string s, t[110];
int k;
int main()
{
	cin>>k;
	while(k--)
	{
		int n;
		cin>>n;
		int flag=-1;
		for(int i=0;i<n;i++)
		{
			cin>>t[i];
			if(t[i][0]!='#') flag=i;
		}
		for(int i=flag+1;i<n;i++) cout<<t[i]<<" ";
		if(flag!=-1) cout<<t[flag]<<" ";
		for(int i=0;i<flag;i++) cout<<t[i]<<" ";
		cout<<"\n";
	}
}