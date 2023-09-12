#include<bits/stdc++.h>
using namespace std;

string a[26]={"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z", "$", "\'][\'", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};

int main()
{
	string s;
	getline(cin, s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A'&&s[i]<='Z') cout<<a[s[i]-'A'];
		else if(s[i]>='a'&&s[i]<='z') cout<<a[s[i]-'a'];
		else cout<<s[i];
	}
}