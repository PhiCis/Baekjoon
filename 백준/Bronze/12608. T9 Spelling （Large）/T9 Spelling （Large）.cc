#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string s;
	cin>>t;
	getline(cin, s);
	for(int z=1;z<=t;z++)
	{
		cout<<"Case #"<<z<<": ";
		int pre=-1;
		getline(cin, s);
		for(int i=0;i<s.size();i++)
		{
			if('a'<=s[i]&&s[i]<='c'){if(pre==2) cout<<" "; for(int j=0;j<=s[i]-'a';j++) cout<<2; pre=2;}
			if('d'<=s[i]&&s[i]<='f'){if(pre==3) cout<<" "; for(int j=0;j<=s[i]-'d';j++) cout<<3; pre=3;}
			if('g'<=s[i]&&s[i]<='i'){if(pre==4) cout<<" "; for(int j=0;j<=s[i]-'g';j++) cout<<4; pre=4;}
			if('j'<=s[i]&&s[i]<='l'){if(pre==5) cout<<" "; for(int j=0;j<=s[i]-'j';j++) cout<<5; pre=5;}
			if('m'<=s[i]&&s[i]<='o'){if(pre==6) cout<<" "; for(int j=0;j<=s[i]-'m';j++) cout<<6; pre=6;}
			if('p'<=s[i]&&s[i]<='s'){if(pre==7) cout<<" "; for(int j=0;j<=s[i]-'p';j++) cout<<7; pre=7;}
			if('t'<=s[i]&&s[i]<='v'){if(pre==8) cout<<" "; for(int j=0;j<=s[i]-'t';j++) cout<<8; pre=8;}
			if('w'<=s[i]&&s[i]<='z'){if(pre==9) cout<<" "; for(int j=0;j<=s[i]-'w';j++) cout<<9; pre=9;}
			if(s[i]==' '){if(pre==0) cout<<" "; cout<<0; pre=0;}
		}
		cout<<"\n";
	}
}