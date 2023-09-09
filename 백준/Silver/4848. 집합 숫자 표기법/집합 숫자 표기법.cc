#include<bits/stdc++.h>
using namespace std;

map<int, string> m;

string f(int a)
{
	if(m[a] != "") return m[a];
	if(a==0) return m[0]="{}";
	if(a==1) return m[1]="{{}}";
	string s = "{";
	for(int i=0;i<a;i++)
	{
		s+=f(i);
		if(i!=a-1) s+=",";
	}
	s+="}";
	return m[a]=s;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1, s2;
		cin>>s1>>s2;
		int a, b;
		if(s1=="{}") a=0;
		else
		{
			int tmp=0;
			for(int i=0;i<s1.size();i++)
			{
				if(s1[i]==',') tmp++;
			}
			if(tmp==0) a=1;
			if(tmp==1) a=2;
			if(tmp==3) a=3;
			if(tmp==7) a=4;
			if(tmp==15) a=5;
			if(tmp==31) a=6;
			if(tmp==63) a=7;
			if(tmp==127) a=8;
			if(tmp==255) a=9;
			if(tmp==511) a=10;
			if(tmp==1023) a=11;
			if(tmp==2047) a=12;
			if(tmp==4095) a=13;
			if(tmp==8191) a=14;
			if(tmp==16383) a=15;
		}
		if(s2=="{}") b=0;
		else
		{
			int tmp=0;
			for(int i=0;i<s2.size();i++)
			{
				if(s2[i]==',') tmp++;
			}
			if(tmp==0) b=1;
			if(tmp==1) b=2;
			if(tmp==3) b=3;
			if(tmp==7) b=4;
			if(tmp==15) b=5;
			if(tmp==31) b=6;
			if(tmp==63) b=7;
			if(tmp==127) b=8;
			if(tmp==255) b=9;
			if(tmp==511) b=10;
			if(tmp==1023) b=11;
			if(tmp==2047) b=12;
			if(tmp==4095) b=13;
			if(tmp==8191) b=14;
			if(tmp==16383) b=15;
		}
		cout<<f(a+b)<<"\n";
	}
}