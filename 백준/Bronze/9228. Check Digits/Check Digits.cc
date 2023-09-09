#include<bits/stdc++.h>
using namespace std;

string a;

int main()
{
	while(1)
	{
		cin>>a;
		if(a=="#") return 0;
		int ans=0;
		for(int i=0;i<a.size();i++)
		{
			ans+=(a[i]-'0')*(a.size()-i+1);
		}
		ans=11-ans%11;
		if(ans%11<10) cout<<a<<" -> "<<ans%11<<"\n";
		else if(ans%11==10) cout<<a<<" -> "<<"Rejected\n";
		else cout<<a<<" -> "<<0<<"\n";
	}
}