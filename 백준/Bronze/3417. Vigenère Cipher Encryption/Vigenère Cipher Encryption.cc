#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string a, b;
		cin>>a;
		if(a=="0") return 0;
		cin>>b;
		for(int i=0;i<b.size();i++)
		{
			cout<<(char)('A'+(b[i]-'A'+(a[i%a.size()]-'A')+1)%26);
		}
		cout<<"\n";
	}
}