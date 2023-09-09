#include<bits/stdc++.h>
using namespace std;

int n;
string s, t, a, b;
int A, B;

int main()
{
	while(1)
	{
		A=B=0;
		cin>>s>>t;
		if(s=="#") return 0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a>>b;
			if(a==b) A++;
			else B++;
		}
		cout<<s<<" "<<A<<" "<<t<<" "<<B<<"\n";
	}
}