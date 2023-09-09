#include<bits/stdc++.h>
using namespace std;

vector<string> a;
vector<vector<string> > b;

string f(string a){
	string b="";
	vector<int> A(26, 0);
	for(int i=0;i<a.size();i++) A[a[i]-'a']++;
	for(int i=0;i<26;i++) for(int j=0;j<A[i];j++) b+=char('a'+i);
	return b;
}

bool cmp(string a, string b){
	return f(a)<f(b);
}

bool cmp2(vector<string> a, vector<string> b){
	if(a.size()!=b.size()) return a.size()>b.size();
	else return a[0]<b[0];
}

int main()
{
	string s;
	while(cin>>s){
		if(s=="#") break;
		a.push_back(s);
	}
	sort(a.begin(), a.end(), cmp);
	vector<string> v;
	for(int i=0;i<a.size();i++)
	{
		if(v.empty()) v.push_back(a[i]);
		else{
			if(f(v[0])==f(a[i])) v.push_back(a[i]);
			else sort(v.begin(), v.end()), b.push_back(v), v.clear(), i--;
		}
	}
	sort(v.begin(), v.end()), b.push_back(v);
	sort(b.begin(), b.end(), cmp2);
	for(int i=0;i<min(5, (int)b.size());i++)
	{
		cout<<"Group of size "<<b[i].size()<<": ";
		for(int j=0;j<b[i].size();j++){
			if(j>0&&b[i][j]==b[i][j-1]) continue;
			cout<<b[i][j]<<" ";
		}
		cout<<".\n";
	}	
}