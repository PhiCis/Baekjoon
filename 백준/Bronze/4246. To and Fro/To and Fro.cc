#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	while(1)
	{
		cin>>n;
		if(!n) return 0;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<s.size()/n;j++)
			{
				if(j%2==0) cout<<s[i+j*n];
				else cout<<s[(j+1)*n-1-i];
			}
		}
		cout<<"\n";
	}
}