#include<bits/stdc++.h>
using namespace std;

int m, n;
vector<int> in[1000100];
int out[1000100];
int chk[1000100], cyc[1000100];
int a, b;
int ans=0;

void dfs(int now, int depth)
{
    for(auto next:in[now])
    {
        if(chk[next]==2) continue;
        dfs(next, depth+1);
    }
    ans=max(ans, depth);
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    cin>>m>>n;
    for(int i=0;i<n;i++) out[i]=i;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        out[a]=b;
        in[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(chk[i]) continue;
        int tmp=i, ttmp=0;
        while(chk[tmp]==0)
        {
            chk[tmp]=3;
            tmp=out[tmp];
        }
        if(chk[tmp]==3)
        {
            while(chk[tmp]==3)
            {
                ttmp++;
                chk[tmp]=2;
                tmp=out[tmp];
            }
            for(int j=0;j<ttmp;j++)
            {
                cyc[tmp]=ttmp;
                tmp=out[tmp];
            }
        }
        tmp=i;
        while(chk[tmp]==3)
        {
            chk[tmp]=1;
            tmp=out[tmp];
        }
    }
//    for(int i=0;i<n;i++)
//    {
//        cout<<chk[i]<<" "<<cyc[i]<<"\n";
//    }
    for(int i=0;i<n;i++)
    {
        if(chk[i]==2)
        {
            dfs(i, cyc[i]);
        }
    }
    cout<<ans;
}
