#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
	while(1)
	{
		cin>>s;
		if(s=="#") return 0;
		map<char, int> m;
		for(int i=0;i<s.size();i++)
		{
			m[s[i]]++;
		}
		if(m['A']*2>=s.size()) cout<<"need quorum";
		else if(m['Y']>m['N']) cout<<"yes";
		else if(m['Y']<m['N']) cout<<"no";
		else if(m['Y']==m['N']) cout<<"tie";
		cout<<"\n";
	}
}