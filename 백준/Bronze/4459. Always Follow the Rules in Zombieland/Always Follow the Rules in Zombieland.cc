#include<bits/stdc++.h>
using namespace std;

map<int, string> m;
int n, k;

int main()
{
	cin>>n;
	string s;
	getline(cin, s);
	for(int i=1;i<=n;i++)
	{
		string s;
		getline(cin, s);
		m[i]=s;
	}
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		int a;
		cin>>a;
		printf("Rule %d: ", a);
		if(m[a] != "") cout<<m[a]<<"\n";
		else cout<<"No such rule\n";
	}
}