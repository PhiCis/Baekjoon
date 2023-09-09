#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
	while(cin>>n)
	{
		vector<string> v;
		map<string, int> m;
		while(1)
		{
			string s;
			getline(cin, s);
			if(s=="EndOfText") break;
			v.push_back(s);
		}
		for(auto s:v){
			string tmp = "";
			for(int i=0;i<s.size();i++)
			{
				if('a'<=s[i]&&s[i]<='z') tmp+=s[i];
				else if('A'<=s[i]&&s[i]<='Z') tmp+=s[i]-'A'+'a';
				else{
					if(tmp == "") continue;
					m[tmp]++;
					tmp="";
				}
			}
			if(tmp == "") continue;
			m[tmp]++;
			tmp="";
		}
		map<string,int>::iterator it;
		int ans = 0;
		for(it=m.begin();it!=m.end();it++)
		{
			if(it->second==n)
			{
				ans++;
				cout<<it->first<<"\n";
			}
		}
		if(ans==0) printf("There is no such word.\n");
		printf("\n");
	}
}