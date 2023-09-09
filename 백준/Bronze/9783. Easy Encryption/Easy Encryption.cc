#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
	getline(cin, s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a'&&s[i]<='z') printf("%02d", (s[i]-'a'+1));
		else if(s[i]>='A'&&s[i]<='Z') printf("%02d", (s[i]-'A'+27));
		else if(s[i]>='0'&&s[i]<='9') cout<<"#"<<s[i];
		else cout<<s[i];
	}
}