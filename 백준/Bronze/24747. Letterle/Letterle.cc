#include<bits/stdc++.h>
using namespace std;
string s, t;
int main()
{
	cin>>s;
	for(int i=1;i<=7;i++)
	{
		cin>>t;
		if(s==t)
		{
			cout<<"WINNER";
			return 0;
		}
		else if(i==7)
		{
			cout<<"LOSER";
			return 0;
		}
		for(int j=0;j<5;j++)
		{
			if(t[j]==s[j]) cout<<"G";
			else
			{
				int cnt=0;
				for(int k=0;k<5;k++)
				{
					if(t[j]==s[k]) cnt++;
				}
				if(cnt) cout<<"Y";
				else cout<<"X";
			}
		}
		cout<<"\n";
	}
}