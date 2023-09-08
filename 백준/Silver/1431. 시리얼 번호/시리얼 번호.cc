#include<bits/stdc++.h>
using namespace std;
int n;
string s[1010];
bool cmp(string t1, string t2)
{
	if(t1.size()!=t2.size()) return t1.size()<t2.size();
	int tmp1=0, tmp2=0;
	for(int i=0;i<t1.size();i++)
	{
		if(t1[i]>='0'&&t1[i]<='9') tmp1+=t1[i]-'0';
	}
	for(int i=0;i<t2.size();i++)
	{
		if(t2[i]>='0'&&t2[i]<='9') tmp2+=t2[i]-'0';
	}
	if(tmp1!=tmp2) return tmp1<tmp2;
	return t1.compare(t2)<0;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	sort(s, s+n, cmp);
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<"\n";
	}
}