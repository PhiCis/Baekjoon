#include<bits/stdc++.h>
using namespace std;

int n;
int main()
{
	while(cin>>n)
	{
		if(n==0) return 0;
		int s=1, e=50;
		while(1)
		{
			int m=s+e>>1;
			cout<<m<<" ";
			if(m==n)
			{
				cout<<"\n";
				break;
			}
			if(m>n) e=m-1;
			else s=m+1;
		}
	}
}