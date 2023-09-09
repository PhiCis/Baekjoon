#include<bits/stdc++.h>
using namespace std;
int n;
string s, tmp, c[11010]; 
int pnt;
bool cmp(string t1, string t2)
{
	if(t1.size()!=t2.size()) return t1.size()<t2.size();
	return t1.compare(t2)<0;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s="", tmp="";
		cin>>s;
		for(int j=0;j<s.size();j++)
		{
			if(s[j]>='0'&&s[j]<='9')
			{
				tmp=tmp+s[j];
			}
			else if(tmp.size())
			{
				int k=0;
				while(k<tmp.size()-1&&tmp[k]=='0') k++;
				for(;k<tmp.size();k++)
				{
					c[pnt]+=tmp[k];
				}
				pnt++;
				tmp="";
			}
		}
		if(tmp.size())
		{
			int k=0;
			while(k<tmp.size()-1&&tmp[k]=='0') k++;
			for(;k<tmp.size();k++)
			{
				c[pnt]+=tmp[k];
			}
			pnt++;
			tmp="";
		}
	}
	sort(c, c+pnt, cmp);
	for(int i=0;i<pnt;i++)
	{
		cout<<c[i]<<"\n";
	}
}