#include<bits/stdc++.h>
using namespace std;

int n;
string s;
int a, b;

int main()
{
	scanf("%d", &n);
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='A') a++;
		else b++;
	}
	if(a==b)
	{
		printf("Tie");
	}
	if(a>b)
	{
		printf("A");
	}
	if(a<b)
	{
		printf("B");
	}
}