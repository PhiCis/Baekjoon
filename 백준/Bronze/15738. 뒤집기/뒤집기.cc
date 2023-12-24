#include<bits/stdc++.h>
using namespace std;

int n, k, m;
string s;
int q;
int main() 
{
	cin>>n>>k>>m;
	getline(cin, s);
	getline(cin, s);
	for(int i=1;i<=m;i++)
	{
		cin>>q;
		if(q>0)
		{
			if(k<=q) k = q+1-k;
		}
		else
		{
			q=-q;
			if(k>=n+1-q) k=2*n+1-q-k;
		}
	}
	cout<<k;
}