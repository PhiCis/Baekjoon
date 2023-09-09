#include<bits/stdc++.h>
using namespace std;

int d[8][2]={-2, -1, -2, 1, -1, -2, -1, 2, 1, -2, 1, 2, 2, -1, 2, 1};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		pair<int, int> s, e;
		cin>>n>>s.first>>s.second>>e.first>>e.second;
		vector<vector<int> > c(n, vector<int>(n, 0));
		queue<pair<int, int> > q;
		q.push(s);
		c[s.first][s.second]=1;
		while(!q.empty())
		{
			pair<int, int> now = q.front();
			q.pop();
			if(now==e) break;
			for(int i=0;i<8;i++)
			{
				pair<int, int> next = make_pair(now.first+d[i][0], now.second+d[i][1]);
//				cout<<next.first<<" "<<next.second<<"\n";
				if(next.first>=0&&next.first<n&&next.second>=0&&next.second<n&&c[next.first][next.second]==0)
				{
					c[next.first][next.second]=c[now.first][now.second]+1;
					q.push(next);
				}
			}
		}
		cout<<c[e.first][e.second]-1<<"\n";
	}
}