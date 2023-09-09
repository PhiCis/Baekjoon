#include<bits/stdc++.h>
using namespace std;

int n;
int main()
{
	cin>>n;
	int tmp=0;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		if(tmp<s.size()) cout<<s[tmp];
		else cout<<" ";
		tmp=s.size()-1;
	}
}