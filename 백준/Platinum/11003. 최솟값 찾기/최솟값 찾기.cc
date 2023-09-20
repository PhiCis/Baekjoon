#include<bits/stdc++.h>
using namespace std;

int a[5000050], b[5000050], n, l;
deque<pair<int, int> > q;
int main()
{
    scanf("%d%d", &n, &l);
    for(int i=1;i<=n;i++) scanf("%d", &a[i]);
    for(int i=1;i<=n;i++)
    {
        while((!q.empty()) && q.back().first>=a[i]) q.pop_back();
        q.push_back({a[i], i+l-1});
        b[i]=q.front().first;
        if(q.front().second==i) q.pop_front();
        
    }
    for(int i=1;i<=n;i++) printf("%d ", b[i]);
}
