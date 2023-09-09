#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string s;
		getline(cin, s);
		if(s=="END") return 0;
		map<int, int> m;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ') continue;
			if(m[s[i]-'A'])
			{
				goto skip;
			}
			m[s[i]-'A']=1;
		}
		cout<<s<<"\n";
		skip:;
	}
}