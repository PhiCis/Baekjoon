#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin>>n>>s;
	while(n--)
	{
		string t = "";
		int cnt = 0;
		for(int i=0;i<s.size();i++)
		{
			if(i==0 || s[i]==s[i-1])
			{
				cnt++;
			}
			else
			{
				t+=to_string(cnt);
				t+=s[i-1];
				cnt=1;
			}
		}
		t+=to_string(cnt);
		t+=s[s.size()-1];
		s=t;
	}
	cout<<s;
}