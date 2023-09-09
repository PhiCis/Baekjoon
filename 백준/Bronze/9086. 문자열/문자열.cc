#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		string s;
		cin>>s;
		printf("%c%c\n", s[0], s[s.size()-1]);
	}
}