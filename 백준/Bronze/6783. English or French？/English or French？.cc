#include<bits/stdc++.h>
using namespace std;

int n;
string s;
int A, B;

int main()
{
	cin>>n;
	getline(cin, s);
	for(int i=0;i<n;i++)
	{
		getline(cin, s);
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='s'||s[i]=='S') A++;
			if(s[i]=='t'||s[i]=='T') B++;
		}
	}
	if(A<B) cout<<"English";
	else cout<<"French";
}