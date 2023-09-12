#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		double a, b;
		cin>>a>>b;
		if(a/b>=0.99*1.618033988749 && a/b<=1.01*1.618033988749) cout<<"golden\n";
		else cout<<"not\n";		
	}
}