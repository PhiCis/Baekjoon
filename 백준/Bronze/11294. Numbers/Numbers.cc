#include<bits/stdc++.h>
using namespace std;

string s="0123456789ABCDEFGHIJ";

void f(int a, int b)
{
	if(a==0) return;
	f(a/b, b);
	cout<<s[a%b];
}

int main()
{
	while(1)
	{
		string t;
		int a, b;
		getline(cin, t);
		if(t=="#") return 0;
		cin>>a>>b;
		cout<<t<<", "<<b<<", ";
		f(b, a);
		cout<<"\n";
		getline(cin, t);
	}
}