#include<bits/stdc++.h>
using namespace std;

string s, p;
vector<int> pi, ans;

void kmp(string s, string p, vector<int>& f)
{
	int n=s.size(), m=p.size();
	int j=0;
	for(int i=1;i<n;i++)
	{
		while((j>0&&s[i]!=p[j])||j==m) j=pi[j-1];
		if(s[i]==p[j]) f[i]=++j;
	}
}
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	
	cin>>p>>s;
	s="$"+s+s;
	s.erase(s.end()-1);
//	cout<<s;
    
    pi.resize(p.size());
    ans.resize(s.size());
    
    kmp(p, p, pi);
    kmp(s, p, ans);
    
    int ANS=0;
    for(int i=1;i<s.size();i++)
    {
    	if(ans[i]==p.size()) ANS++;
	}
	cout<<ANS;
}