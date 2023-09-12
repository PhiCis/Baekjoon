#include<bits/stdc++.h>
using namespace std;
int n, a;
string s;

int main()
{
	cin>>n;
	while(n--)
	{
		cin>>s>>a;
		cout<<s<<" ";
		if(a>=97) cout<<"A+\n";
		else if(a>=90) cout<<"A\n";
		else if(a>=87) cout<<"B+\n";
		else if(a>=80) cout<<"B\n";
		else if(a>=77) cout<<"C+\n";
		else if(a>=70) cout<<"C\n";
		else if(a>=67) cout<<"D+\n";
		else if(a>=60) cout<<"D\n";
		else cout<<"F\n";
	}
}