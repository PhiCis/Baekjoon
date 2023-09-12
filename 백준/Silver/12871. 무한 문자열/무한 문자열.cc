#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s, t;
	cin>>s>>t;
	int s1=s.size(), s2=t.size();
	string tmp1=s, tmp2=t;
	for(int i=1;i<=s2-1;i++)
	{
		s+=tmp1;
	}
	for(int i=1;i<=s1-1;i++)
	{
		t+=tmp2;
	}
	for(int i=0;i<s1*s2;i++)
	{
		if(s[i]!=t[i])
		{
			printf("0");
			return 0;
		}
	}
	printf("1");
	return 0;
}