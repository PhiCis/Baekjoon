#include<bits/stdc++.h>
using namespace std;

int n, k;
queue<int> q;
map<int, int> m;
long long ans;
string s;

int main()
{
	ios::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		ans+=m[s.size()];
		m[s.size()]++;
		q.push(s.size());
		if(q.size()>k)
		{
			int a = q.front();
			q.pop();
			m[a]--;
		}
	}
	cout<<ans;
}