#include<bits/stdc++.h>
using namespace std;
#define int long long

string a, b;
int t;

main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cin>>a>>b;
		cout<<"Ciphertext: ";
		for(int i=0;i<b.size();i++)
		{
			cout<<(char)('A'+(b[i]-'A'+a[i%a.size()]-'A')%26);
		}
		cout<<"\n";
	}
}