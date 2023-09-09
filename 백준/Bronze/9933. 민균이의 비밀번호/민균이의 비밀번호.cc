#include<bits/stdc++.h>
using namespace std;

int n;
string s[110];

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
		string t = s[i];
		reverse(t.begin(), t.end());
		for(int j=0;j<n;j++)
		{
			if(s[j]==t)
			{
				printf("%d %c", (int)t.size(), t[t.size()/2]);
				return 0;
			}
		}
	}
}