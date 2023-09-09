#include<bits/stdc++.h>
using namespace std;

string s, t;
int ans;

int main()
{
	cin>>s;
	while(getline(cin, t))
	{
//		if(t=="#") break;
		for(int i=0;i<(int)t.size()-(int)s.size()+1;i++)
		{
//			printf("*");
			for(int j=0;j<s.size();j++)
			{
				if(s[j]!=t[i+j]) goto skip;
			}
			ans++;
			skip:;
		}
	}
	cout<<ans;
}