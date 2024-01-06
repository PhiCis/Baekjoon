#include<bits/stdc++.h>
using namespace std;

int id[10];
int a;
int pre;

int main()
{
	for(int i=1;i<=9;i++)
	{
		cin>>a;
		id[a]=i;
	}
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if('a'<=s[i]&&s[i]<='c'){if(pre==2) cout<<"#"; for(int j=0;j<=s[i]-'a';j++) cout<<id[2]; pre=2;}
		if('d'<=s[i]&&s[i]<='f'){if(pre==3) cout<<"#"; for(int j=0;j<=s[i]-'d';j++) cout<<id[3]; pre=3;}
		if('g'<=s[i]&&s[i]<='i'){if(pre==4) cout<<"#"; for(int j=0;j<=s[i]-'g';j++) cout<<id[4]; pre=4;}
		if('j'<=s[i]&&s[i]<='l'){if(pre==5) cout<<"#"; for(int j=0;j<=s[i]-'j';j++) cout<<id[5]; pre=5;}
		if('m'<=s[i]&&s[i]<='o'){if(pre==6) cout<<"#"; for(int j=0;j<=s[i]-'m';j++) cout<<id[6]; pre=6;}
		if('p'<=s[i]&&s[i]<='s'){if(pre==7) cout<<"#"; for(int j=0;j<=s[i]-'p';j++) cout<<id[7]; pre=7;}
		if('t'<=s[i]&&s[i]<='v'){if(pre==8) cout<<"#"; for(int j=0;j<=s[i]-'t';j++) cout<<id[8]; pre=8;}
		if('w'<=s[i]&&s[i]<='z'){if(pre==9) cout<<"#"; for(int j=0;j<=s[i]-'w';j++) cout<<id[9]; pre=9;}
	}
}