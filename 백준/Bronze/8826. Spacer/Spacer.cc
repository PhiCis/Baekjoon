#include<bits/stdc++.h>
using namespace std;

int n, k;
char c;
int main()
{
	cin>>n;
	while(n--)
	{
		int a=0, b=0;
		cin>>k;
		for(int i=1;i<=k;i++)
		{
			cin>>c;
			if(c=='N') a++;
			if(c=='S') a--;
			if(c=='W') b++;
			if(c=='E') b--;
		}
		cout<<abs(a)+abs(b)<<"\n";
	}
}