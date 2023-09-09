#include<bits/stdc++.h>
using namespace std;

int n, a;
string s, t;

int main()
{
	while(1)
	{
		cin>>s>>n;
		if(s=="#") return 0;
		while(1)
		{
			cin>>t>>a;
			if(t=="X") break;
			if(t=="B") if(n+a<=68) n+=a;
			if(t=="C") if(n-a>=0) n-=a;
		}
		cout<<s<<" "<<n<<"\n";
	}
}