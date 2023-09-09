#include<bits/stdc++.h>
using namespace std;

int n, a;
string s;

int main()
{
	while(1)
	{
		cin>>s;
		if(s=="END") return 0;
		if(s=="1") cout<<"1\n";
		else if(s.size()==1) cout<<"2\n";
		else if(s.size()<=9) cout<<"3\n";
		else cout<<"4\n";
	}
}