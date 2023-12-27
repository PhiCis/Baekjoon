#include<bits/stdc++.h>
using namespace std;

int n;
char a, b;
int c;
int A[2];

int main()
{
	while(cin>>n)
	{
		if(n==7) return 0;
		if(n==1)
		{
			cin>>a>>c;
			A[a-'A']=c;
		}
		if(n==2)
		{
			cin>>a;
			cout<<A[a-'A']<<"\n";
		}
		if(n==3)
		{
			cin>>a>>b;
			A[a-'A']+=A[b-'A'];
		}
		if(n==4)
		{
			cin>>a>>b;
			A[a-'A']*=A[b-'A'];
		}
		if(n==5)
		{
			cin>>a>>b;
			A[a-'A']-=A[b-'A'];
		}
		if(n==6)
		{
			cin>>a>>b;
			A[a-'A']/=A[b-'A'];
		}
	}
}