#include<bits/stdc++.h>
using namespace std;

int n, k;
int s, e;
int m;
string t;

int main()
{
	cin>>n>>k;
	s=1, e=k;
	while(n--)
	{
		cin>>m>>t;
		if(t=="SAFE") s=max(s, m);
		else e=min(e, m);
	}
	cout<<s+1<<" "<<e-1;
}