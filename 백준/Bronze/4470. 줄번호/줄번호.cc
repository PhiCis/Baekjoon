#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d\n", &n);
	for(int i=1;i<=n;i++)
	{
		string s;
		getline(cin, s);
		cout<<i<<". "<<s<<"\n";
	}
}