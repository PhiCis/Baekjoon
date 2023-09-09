#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	while(1)
	{
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0) return 0;
		if(a==0) cout<<c/b<<" "<<b<<" "<<c;
		if(b==0) cout<<a<<" "<<c/a<<" "<<c;
		if(c==0) cout<<a<<" "<<b<<" "<<a*b;
		cout<<"\n";
	}
}