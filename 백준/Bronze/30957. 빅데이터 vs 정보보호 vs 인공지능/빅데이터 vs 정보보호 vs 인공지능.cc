#include<bits/stdc++.h>
using namespace std;

string s;
int n;
int A, B, S;
int main()
{
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='S') S++;
		if(s[i]=='B') B++;
		if(s[i]=='A') A++;
	}
	if(A==B&&B==S) cout<<"SCU";
	else
	{
		if(B>=A&&B>=S) cout<<"B";
		if(S>=B&&S>=A) cout<<"S";
		if(A>=B&&A>=S) cout<<"A";
	}
}