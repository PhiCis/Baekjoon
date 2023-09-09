#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0;
	string s;
	while(cin>>s)
	{
		cnt++;
		if(cnt == 1 || (s!="i" && s!="pa" &&s!="te" &&s!="ni" &&s!="niti" &&s!="a" &&s!="ali" &&s!="nego" &&s!="no" &&s!="ili")) cout<<char(s[0]-'a'+'A');
	}
}