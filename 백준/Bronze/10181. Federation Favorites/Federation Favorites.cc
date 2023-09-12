#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==-1) return 0;
		if(n==6)
		{
			cout<<"6 = 1 + 2 + 3\n";
		}
		else if(n==28)
		{
			cout<<"28 = 1 + 2 + 4 + 7 + 14\n";
		}
		else if(n==496)
		{
			cout<<"496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248\n";
		}
		else if(n==8128)
		{
			cout<<"8128 = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 127 + 254 + 508 + 1016 + 2032 + 4064\n";
		}
		else
		{
			printf("%d is NOT perfect.\n", n);
		}
	}
}