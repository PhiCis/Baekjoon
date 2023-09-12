#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		cin>>s;
		if(s.size()&1)
		{
			for(int i=0;i<2*s.size();i+=2)
			{
				printf("%c", s[i%s.size()]);
			}
			printf("\n");
			for(int i=1;i<2*s.size();i+=2)
			{
				printf("%c", s[i%s.size()]);
			}
			printf("\n");
		}
		else
		{
			for(int i=0;i<s.size();i+=2)
			{
				printf("%c", s[i%s.size()]);
			}
			printf("\n");
			for(int i=1;i<s.size();i+=2)
			{
				printf("%c", s[i%s.size()]);
			}
			printf("\n");
		}
	}
}