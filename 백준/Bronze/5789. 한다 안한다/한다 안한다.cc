#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	scanf("%d", &n);
	while(n--)
	{
		cin>>s;
		if(s[s.size()/2-1]==s[s.size()/2]) printf("Do-it\n");
		else printf("Do-it-Not\n");
	}
}
