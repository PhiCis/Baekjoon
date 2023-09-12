#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		string s;
		scanf("%d%d", &a, &b);
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			s[i]=(a*(s[i]-'A')+b)%26+'A';
		}
		cout<<s<<"\n";
	}
}