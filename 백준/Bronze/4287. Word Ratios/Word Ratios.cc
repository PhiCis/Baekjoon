#include<bits/stdc++.h>
using namespace std;


int main()
{
	while(1)
	{
		string a, b, c;
		cin>>a;
		if(a=="#") return 0;
		cin>>b>>c;
		cout<<a<<" "<<b<<" "<<c<<" ";
		int n=a.size();
		for(int i=0;i<n;i++)
		{
			cout<<char('a'+(c[i]-'a'+b[i]-a[i]+26)%26);
		}
		cout<<"\n";
	}
}