#include<bits/stdc++.h>
using namespace std;

int sz;
string s;
char a[9]={'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E'};

int main()
{
	cin>>s;
	sz = s.size();
	for(int i=0;i<sz;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(s[i]==a[j]) goto skip;
		}
		printf("%c", s[i]);
		skip:;
	}
}