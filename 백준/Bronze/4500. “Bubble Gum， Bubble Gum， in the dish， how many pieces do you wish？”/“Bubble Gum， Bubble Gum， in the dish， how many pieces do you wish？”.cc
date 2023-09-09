#include<bits/stdc++.h>
using namespace std;

int t, k;
string s;

int main()
{
	cin>>t;
	while(t--)
	{
		getline(cin, s);
		vector<string> a;
		map<string, int> m;
		getline(cin, s);
		string tmp="";
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				a.push_back(tmp);
				tmp="";
			}
			else tmp+=s[i];
		}
		a.push_back(tmp);
		for(int i=0;i<a.size();i++)
		{
			m[a[i]]=i;
		}
		cin>>s>>k;
//		cout<<m[s];
		cout<<a[(m[s]+k-1)%a.size()]<<"\n";
	}
}