#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
	cin>>t;
	while(t--)
	{
		int n;
		char a;
		cin>>n>>a;
		if(a=='C')
		{
			while(n--)
			{
				char c;
				cin>>c;
				cout<<((int)c+1-'A')<<" ";
			}
		}
		else
		{
			while(n--)
			{
				string c;
				cin>>c;
				cout<<(char)(stoi(c)-1+'A')<<" ";
			}
		}
		cout<<"\n";
	}
}