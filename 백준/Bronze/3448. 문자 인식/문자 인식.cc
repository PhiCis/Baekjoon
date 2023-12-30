#include<bits/stdc++.h>
using namespace std;

int t;
string s;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>t;
	getline(cin, s);
	while(t--)
	{
		int cnt=0, ans=0;
		while(1)
		{
			getline(cin, s);
			if(s!="")
			{
				cnt+=s.size();
				for(int i=0;i<s.size();i++)
				{
					if(s[i]=='#') ans++;
				}
			}
			else break;
		}
		ans=cnt-ans;
		int ANS=(ans*2000+cnt)/(2*cnt);
		if(ANS%10==0) cout<<"Efficiency ratio is "<<ANS/10<<"%.\n";
		else cout<<"Efficiency ratio is "<<ANS/10<<"."<<ANS%10<<"%.\n";
	}
}