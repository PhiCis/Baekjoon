#include<bits/stdc++.h>
using namespace std;

string a;
int n;
string t[50050];
string s[50050];

string f(string s)
{
	string ret = "";
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='i'||s[i]=='j') ret+='1';
		if(s[i]=='a'||s[i]=='b'||s[i]=='c') ret+='2';
		if(s[i]=='d'||s[i]=='e'||s[i]=='f') ret+='3';
		if(s[i]=='g'||s[i]=='h') ret+='4';
		if(s[i]=='k'||s[i]=='l') ret+='5';
		if(s[i]=='m'||s[i]=='n') ret+='6';
		if(s[i]=='p'||s[i]=='r'||s[i]=='s') ret+='7';
		if(s[i]=='t'||s[i]=='u'||s[i]=='v') ret+='8';
		if(s[i]=='w'||s[i]=='x'||s[i]=='y') ret+='9';
		if(s[i]=='o'||s[i]=='q'||s[i]=='z') ret+='0';
	}
	return ret;
}

bool c[200][200];
string d[200][200];
int ans[200];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin>>a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i];
		s[i]=f(t[i]);
		for(int j=0;j+s[i].size()<=a.size();j++)
		{
			for(int k=0;k<s[i].size();k++)
			{
				if(s[i][k]!=a[j+k]) goto skip;
			}
			c[j][j+s[i].size()]=true;
			d[j][j+s[i].size()]=t[i];
			skip:;
		}
//		cout<<s[i]<<"\n";
	}
	for(int i=1;i<=a.size();i++) ans[i]=2e9;
	ans[0]=0;
	for(int i=1;i<=a.size();i++)
	{
		for(int j=0;j<i;j++)
		{
			if(c[j][i])
			{
				ans[i]=min(ans[i], ans[j]+1);
			}
		}
	}
//	for(int i=0;i<=a.size();i++)
//	{
//		cout<<ans[i]<<"\n";
//	}
	if(ans[a.size()]==2e9) cout<<"0\nNo solution.";
	else
	{
		stack<string> st;
		cout<<ans[a.size()]<<"\n";
		int pnt = a.size();
		int tmp = pnt;
		while(1)
		{
			while(tmp--)
			{
				if(ans[tmp]+1==ans[pnt] && c[tmp][pnt])
				{
					st.push(d[tmp][pnt]);
					pnt=tmp;
					break;
				}
			}
			if(pnt==0) break;
		}
		while(!st.empty())
		{
			cout<<st.top()<<"\n";
			st.pop();
		}
	}
}