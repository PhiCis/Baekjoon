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
	
	string t[8];
	int n, k, AANS=0;
	
	cin>>n;
	for(int i=0;i<n;i++) cin>>t[i];
	cin>>k;
	
	vector<int> v;
	
	for(int i=0;i<n;i++) v.push_back(i);
	
	do{
		p="";
		for(int i=0;i<n;i++) p+=t[v[i]];
		s="$"+p+p;
		s.erase(s.end()-1);
		pi.resize(p.size());
    	ans.resize(s.size());
		kmp(p, p, pi);
    	kmp(s, p, ans);
    	int ANS=0;
    	for(int i=1;i<s.size();i++)
	    {
	    	if(ans[i]==p.size()) ANS++;
		}
		if(ANS==k) AANS++;
	}while(next_permutation(v.begin(), v.end()));
	cout<<AANS;
}