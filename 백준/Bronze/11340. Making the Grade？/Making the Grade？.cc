#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
	cin>>n;
	while(n--)
	{
		int a, b, c;
		cin>>a>>b>>c;
		int d=(9000-15*a-20*b-25*c)*25;
		if(d>100000) cout<<"impossible\n";
		else cout<<(d+999)/1000<<"\n";;
	}
}