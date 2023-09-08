#include<bits/stdc++.h>
using namespace std;

string s;
int _n;
int k;
string n;

int main()
{
	for(int i=1;i<=100000;i++)
	{
		s+=to_string(i);
	}
	scanf("%d", &_n);
	n = to_string(_n);
	k = n.size();
	for(int i=0;i<s.size()-k+1;i++)
	{
		for(int j=0;j<k;j++)
		{
			if(s[i+j]!=n[j]) goto skip;
		}
		printf("%d", i+1);
		return 0;
		skip:;
	}
}