#include<bits/stdc++.h>
using namespace std;

int n;
int main()
{
	scanf("%d", &n);
	while(n--)
	{
		string a, b;
		cin>>a>>b;
		int sza = a.size(), szb = b.size();
		int ca[26]={0}, cb[26]={0};
		for(int i=0;i<sza;i++)
		{
			ca[a[i]-'a']++;
		}
		for(int i=0;i<szb;i++)
		{
			cb[b[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			if(ca[i]!=cb[i])
			{
				cout<<a<<" & "<<b<<" are NOT anagrams.\n";
				goto skip;
			}
		}
		cout<<a<<" & "<<b<<" are anagrams.\n";
		skip:;
	}
}