#include<bits/stdc++.h>
using namespace std;

int n;
string s;
int A;

int main()
{
	cin>>n;
	getline(cin, s);
	while(n--)
	{
		A = 0;
		getline(cin, s);
		cout<<s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='b'||s[i]=='B') A--;
			if(s[i]=='g'||s[i]=='G') A++;
		}
		if(A==0) cout<<" is NEUTRAL\n";
		if(A>0) cout<<" is GOOD\n";
		if(A<0) cout<<" is A BADDY\n";
	}
}