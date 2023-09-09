#include<bits/stdc++.h>
using namespace std;
#define int long long

int a, b, c, d, e, n;
string s;
main()
{
	while(1)
	{
		cin>>n;
		a=b=c=d=e=0;
		if(!n) return 0;
		while(n--)
		{
			cin>>s;
			if(s=="0") break;
			if(s=="M"||s=="L") a++;
			else if(s=="S") b++;
			else if(s=="X") e++;
			else
			{
				int t=stoi(s);
				if(t>=12) c++;
				else d++;
			}
		}
		cout<<a<<" "<<c<<" "<<d<<" "<<b<<" "<<e<<"\n";
	}
}