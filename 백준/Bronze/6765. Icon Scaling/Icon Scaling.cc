#include<bits/stdc++.h>
using namespace std;

string s[3]={"*x*", " xx", "* *"};

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<3*n;i++)
	{
		for(int j=0;j<3*n;j++)
		{
			cout<<s[i/n][j/n];
		}
		cout<<"\n";
	}
}