#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d\n", &n);
	while(n--)
	{
		string s;
		int c = 0, v = 0;
		getline(cin, s);
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ') continue;
			else if(s[i]=='a') v++;
			else if(s[i]=='e') v++;
			else if(s[i]=='i') v++;
			else if(s[i]=='o') v++;
			else if(s[i]=='u') v++;
			else if(s[i]=='A') v++;
			else if(s[i]=='E') v++;
			else if(s[i]=='I') v++;
			else if(s[i]=='O') v++;
			else if(s[i]=='U') v++;
			else c++;
		}
		printf("%d %d\n", c, v);
	}
}