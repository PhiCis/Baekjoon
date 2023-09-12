#include<bits/stdc++.h>
using namespace std;

int n, a, b;

string s[7]={"", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
string t[7]={"", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &a, &b);
		if(a>b) swap(a, b); 
		if(a==b)
		{
			cout<<"Case "<<i<<": "<<t[a]<<"\n";
		}
		else if(a==5&&b==6)
		{
			cout<<"Case "<<i<<": "<<"Sheesh Beesh"<<"\n";
		}
		else
		{
			cout<<"Case "<<i<<": "<<s[b]<<" "<<s[a]<<"\n";
		}
	}
}