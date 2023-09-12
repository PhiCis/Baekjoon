#include<bits/stdc++.h>
using namespace std;
char anss[100], anst[100];
int pnts, pntt;

int main()
{
	string s, t;
	cin>>s>>t;
	int l=min(s.size(), t.size());
	for(int i=1;i<=l;i++)
	{
		if(s[s.size()-i]>t[t.size()-i])
		{
			t[t.size()-i]='*';
		}
		if(s[s.size()-i]<t[t.size()-i])
		{
			s[s.size()-i]='*';
		}
	}
	bool chk=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='*')
		{
			anss[pnts++]=s[i];
		}
	}
	for(int i=0;i<t.size();i++)
	{
		if(t[i]!='*')
		{
			anst[pntt++]=t[i];
		}
	}
	if(pnts==0) printf("YODA\n");
	else printf("%d\n", atoi(anss));
	if(pntt==0) printf("YODA\n");
	else printf("%d\n", atoi(anst));
}