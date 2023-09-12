#include<bits/stdc++.h>
using namespace std;

int n, m;
string s;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		reverse(s.begin(), s.begin()+m);
		cout<<s<<"\n";
	}
}