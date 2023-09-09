#include<bits/stdc++.h>
using namespace std;

int season = 0;
int C[8]={10, 8, 6, 5, 4, 3, 2, 1};

bool cmp(pair<string, int> a, pair<string, int> b)
{
	if(a.second!=b.second) return a.second>b.second;
	return a.first.compare(b.first)<0;
}

bool cmp1(pair<pair<string, string>, pair<int, pair<int, int> > > a, pair<pair<string, string>, pair<int , pair<int, int> > > b)
{
	if(a.second.first!=b.second.first) return a.second.first>b.second.first;
	if(a.second.second.first!=b.second.second.first) return a.second.second.first<b.second.second.first;
	if(a.second.second.second!=b.second.second.second) return a.second.second.second>b.second.second.second;
	if(a.first.second!=b.first.second) return a.first.second.compare(b.first.second)<0;
	return a.first.first.compare(b.first.first)<0;
}

int main()
{
	while(1)
	{
		season++;
		map<pair<string, string>, pair<int, pair<int, int> > > m1;
		map<string, int> m2;
		int n;
		cin>>n;
		if(n==0) return 0;
		while(n--)
		{
			string s;
			while(1)
			{
				getline(cin, s);
				if(s[0]=='P') break;
			}
			for(int i=0;i<8;i++)
			{
				string a, b, c, d;
				cin>>a>>b>>c;
				getline(cin, d);
				while(d[0]==' ') d.erase(d.begin());
				while(d[d.size()-1]==' ') d.erase(d.end()-1);
				d.erase(d.end()-1);
				while(d[d.size()-1]==' ') d.erase(d.end()-1);
				
				m1[{b, c}].first+=C[i];
				if(m1[{b, c}].second.first == 0)
				{
					m1[{b, c}].second.first =i+1;
					m1[{b, c}].second.second=1;
				}
				else if(m1[{b, c}].second.first == i+1)
				{
					m1[{b, c}].second.second+=1;
				}
				else if(m1[{b, c}].second.first > i+1)
				{
					m1[{b, c}].second.first =i+1;
					m1[{b, c}].second.second=1;
				}
				m2[d]+=C[i];
			}
			while(1)
			{
				getline(cin, s);
				if(s[0]=='-') break;
			}
		}
		cout<<"Season "<<season<<":\nDrivers Standing:\n";
		vector<pair<pair<string, string>, pair<int, pair<int, int> > > > v1(m1.begin(), m1.end());
		sort(v1.begin(), v1.end(), cmp1);
		for(auto v:v1)
		{
			cout<<v.first.first<<" "<<v.first.second;
			for(int i=0;i<25-v.first.first.size()-v.first.second.size();i++)
			{
				cout<<" ";
			}
			cout<<v.second.first<<"\n";
		}
		cout<<"\nTeams Standing:\n";
		vector<pair<string, int> > v2(m2.begin(), m2.end());
		sort(v2.begin(), v2.end(), cmp);
		for(auto v:v2)
		{
			cout<<v.first;
			for(int i=0;i<26-v.first.size();i++)
			{
				cout<<" ";
			}
			cout<<v.second<<"\n";
		}
		cout<<"\n";
	}
}