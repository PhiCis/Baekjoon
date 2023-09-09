#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	for(int i=100;i>=1;i--)
	{
		if(s.size()%i==0&&i<=s.size()/i)
		{
			for(int j=0;j<i;j++)
			{
				for(int k=0;k<s.size()/i;k++)
				{
					printf("%c", s[j+i*k]);
				}
			}
			return 0;
		}
	}
}