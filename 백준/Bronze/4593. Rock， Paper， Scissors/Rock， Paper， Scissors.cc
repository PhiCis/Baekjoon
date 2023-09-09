#include<bits/stdc++.h>
using namespace std;

string s, t;

int main()
{
	while(1)
	{
		int A=0, B=0;
		cin>>s>>t;
		if(s=="E") return 0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='R'&&t[i]=='S') A++;
			if(s[i]=='S'&&t[i]=='P') A++;
			if(s[i]=='P'&&t[i]=='R') A++;
			if(t[i]=='R'&&s[i]=='S') B++;
			if(t[i]=='S'&&s[i]=='P') B++;
			if(t[i]=='P'&&s[i]=='R') B++;
		}
		cout<<"P1: "<<A<<"\nP2: "<<B<<"\n";
	}
}