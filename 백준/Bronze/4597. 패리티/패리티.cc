#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string s;
		cin>>s;
		if(s=="#") return 0;
		int ans = 0;
		for(int i=0;i<s.size()-1;i++)
		{
			if(s[i]=='1') ans++;
			printf("%c", s[i]);
		}
		if(s[s.size()-1]=='e')
		{
			if(ans&1) printf("1\n");
			else printf("0\n");
		}
		if(s[s.size()-1]=='o')
		{
			if(ans&1) printf("0\n");
			else printf("1\n");
		}
	}
}