#include<bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main()
{
	cin>>a>>b>>c>>d;
	if(b>=c && a*2>=d) cout<<"YES";
	else if(b>=d && a*2>=c) cout<<"YES";
	else cout<<"NO";
}