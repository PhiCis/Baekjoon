#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	cin>>n>>s;
	for(int i=0;i<s.size();i++)
	{
		//0 to i, s.size()-1-i to s.size()-1
		int cnt=0;
		for(int j=0;j<=i;j++)
		{
			if(s[j]!=s[s.size()-1-i+j]) cnt++;
		}
		if(cnt==1)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}