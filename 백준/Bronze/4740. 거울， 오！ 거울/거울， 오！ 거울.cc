#include<bits/stdc++.h>
using namespace std;

int main()
{
	string t="***";
	while(1)
	{
		string s;
		getline(cin, s);
		if(s==t) return 0;
		for(int i=s.size()-1;i>=0;i--)
		{
			printf("%c", s[i]);
		}
		printf("\n");
	}
}