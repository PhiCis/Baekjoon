#include<bits/stdc++.h>
using namespace std;

int ans, cnt, ans2, cnt2;
string s;

int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++) ans+='1'-s[i];
	cnt=s.size();
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0')
		{
			cnt2++;
			if(s[(i+1)%((int)s.size())]=='0') ans2++;
		}
	}
	if(ans*cnt2<ans2*cnt) cout<<"SHOOT";
	else if(ans*cnt2==ans2*cnt) cout<<"EQUAL";
	else cout<<"ROTATE";
}