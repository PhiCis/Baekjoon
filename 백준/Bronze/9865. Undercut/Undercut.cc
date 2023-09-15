#include<bits/stdc++.h>
using namespace std;

int n, a, b, A, B;

int main()
{
	int t;
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cin>>n;
		A=0, B=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a>>b;
			if(a==2&&b==1) B+=6;
			else if(a==1&&b==2) A+=6;
			else if(a==b+1) B+=a+b;
			else if(b==a+1) A+=a+b;
			else if(a>b) A+=a;
			else if(a<b) B+=b;
		}
		cout<<"Game "<<x<<": Tessa "<<A<<" Danny "<<B<<"\n";
	}
}