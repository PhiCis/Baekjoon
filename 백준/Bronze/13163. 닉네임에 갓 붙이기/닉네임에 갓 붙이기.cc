#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	scanf("%d\n", &n);
	while(n--)
	{
		string s;
		getline(cin, s);
		printf("god");
		int i=0;
		while(s[i]!=' ') i++;
		for(;i<s.size();i++) if(s[i]!=' ')printf("%c", s[i]);
		printf("\n");
	}
}