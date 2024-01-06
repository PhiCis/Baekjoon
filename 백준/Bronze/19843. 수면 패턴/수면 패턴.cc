#include<bits/stdc++.h>
using namespace std;

int k, n;
map<string, int> m={{"Mon", 0}, {"Tue", 24}, {"Wed", 48}, {"Thu", 72}, {"Fri", 96}};

int main()
{
	cin>>k>>n;
	while(n--)
	{
		string a, c;
		int b, d;
		cin>>a>>b>>c>>d;
		k-=(m[c]+d-m[a]-b);
	}
	if(k<=0) cout<<0;
	else if(k<=48) cout<<k;
	else cout<<-1;
}