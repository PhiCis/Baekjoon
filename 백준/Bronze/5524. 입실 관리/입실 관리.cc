#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]<='Z')
			{
				s[i]+='a'-'A';
			}
		}
		cout<<s<<"\n";
	}
}