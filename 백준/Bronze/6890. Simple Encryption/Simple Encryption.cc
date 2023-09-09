#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s, t;
	getline(cin, s);
	getline(cin, t);
	int pnt=0;
	for(int i=0;i<t.size();i++)
	{
		if(t[i]>='A'&&t[i]<='Z')
		{
			cout<<(char)((t[i]-'A'+s[pnt%s.size()]-'A')%26+'A');
			pnt++;
		}
	}
}