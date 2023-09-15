#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
	while(1)
	{
		cin>>s;
		if(s=="0") return 0;
		int cnt=1;
		for(int i=1;i<s.size();i++)
		{
			if(s[i]!=s[i-1])
			{
				cout<<cnt<<s[i-1];
				cnt=1;
			}
			else
			{
				cnt++;
			}
		}
		cout<<cnt<<s[s.size()-1]<<"\n";
	}
}