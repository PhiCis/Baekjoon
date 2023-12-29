#include<bits/stdc++.h>
using namespace std;

int t;
int a, b;
map<int, int> m;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(m[b]) cout<<b<<" "<<a-m[b]<<"\n";
		else m[b]=a;
	}
}