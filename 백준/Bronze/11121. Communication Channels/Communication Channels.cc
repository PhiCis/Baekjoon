#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		string s, t;
		cin>>s>>t;
		printf(s==t?"OK\n":"ERROR\n");
	}
}