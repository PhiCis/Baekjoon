#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<pair<int, string> > v;
	int a;
	string s;
	while(cin>>s>>a){
		v.push_back({a, s});
	}
	sort(v.begin(), v.end());
	cout<<v[0].second;
}