#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		printf("String #%d\n", i+1);
		for(int i=0;i<s.size();i++)
		{
			s[i]++;
			if(s[i]=='Z'+1) s[i]='A';
		}
		cout<<s<<"\n\n";
	}
}