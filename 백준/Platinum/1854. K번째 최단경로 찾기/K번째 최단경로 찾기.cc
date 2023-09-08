#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<pair<ll, ll> > adj[1010];
priority_queue< pair<ll, ll>, vector<pair<ll, ll> >, greater<pair<ll, ll> > > pq;
priority_queue<int> dist[1010];

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
 
    for (int i = 0; i < m; i++)
    {
        int from, to, val;
        scanf("%d %d %d", &from, &to, &val);
 
        adj[from].push_back({ val, to });
    }
    
    pq.push({0, 1});
    dist[1].push(0);
 
    while (!pq.empty())
    {
        int here = pq.top().second;
        int cost = pq.top().first;
 
        pq.pop();
 
        for(int i = 0 ; i < adj[here].size(); i++)
        {
            int next = adj[here][i].second;
            int nextCost = adj[here][i].first;
 
            if (dist[next].size() < k)
            {
                dist[next].push(nextCost + cost);
                pq.push({ nextCost + cost, adj[here][i].second });
            }
            else if (dist[next].top() > nextCost + cost)
            {
                dist[next].pop();
                dist[next].push(nextCost + cost);
                pq.push({ nextCost + cost, adj[here][i].second });
            }
 
        }
    }
 
    for (int i = 1; i <= n; i++)
        dist[i].size() == k ? printf("%d\n", dist[i].top()) : printf("-1\n");
    return 0;
}