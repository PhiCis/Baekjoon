#include<bits/stdc++.h>
using namespace std;
stack<char> S;
int pnt;
int main()
{
	while(1)
	{
		pnt++;
		string s="";
		int ans=0;
		cin>>s;
		if(s[0]=='-') break;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='{') S.push(s[i]);
			else
			{
				if(S.empty())
				{
					ans++;
					S.push('{');
				}
				else S.pop();
			}
		}
		
		ans+=S.size()/2;
		printf("%d. %d\n", pnt, ans);
		while(!S.empty()) S.pop();
	}
}