#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string s;
		cin>>s;
		int a, b, c;
		int ans=0;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]=='+')
			{
				b=ans;
				ans=0;
			}
			else if(s[i]=='=')
			{
				c=ans;
				ans=0;
			}
			else
			{
				ans*=10;
				ans+=s[i]-'0';
			}
		}
		a=ans;
		if(a==0&&b==0&&c==0)
		{
			printf("True\n");
			return 0;
		}
		else if(a+b==c)
		{
			printf("True\n");
		}
		else
		{
			printf("False\n");
		}
	}
}