#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	for(int i=1;i<s.size();i++)
	{
		int a = 1, b = 1;
		for(int j=0;j<i;j++)
		{
			a*=(s[j]-'0');
		}
		for(int j=i;j<s.size();j++)
		{
			b*=(s[j]-'0');
		}
		if(a==b)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}