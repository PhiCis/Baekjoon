#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, n;
ll dp[6][1<<16];
pair<int, int> c[16];
ll ans;

ll f(int now, int bit)
{
    if(bit==(1<<n)-1) return 1;
    if(dp[now][bit]!=-1) return dp[now][bit];
    ll tmp=0;
    for(int i=0;i<n;i++)
    {
        if((bit>>i)&1) continue;
        if(c[i].first==now)
        {
            tmp+=f(c[i].second, bit|(1<<i));
        }
        else if(c[i].second==now)
        {
            tmp+=f(c[i].first, bit|(1<<i));
        }
    }
    return dp[now][bit]=tmp;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<(1<<n);j++)
            {
                dp[i][j]=-1;
            }
        }
        map<pair<int, int>, int> m;
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>>a>>b;
            a--; b--;
            c[i]={a, b};
            m[{min(a, b), max(a, b)}]++;
        }
        ans=0;
        for(int i=0;i<6;i++)
        {
            ans+=f(i, 0);
        }
        if(m.size()==1)
        {
            for(auto iter=m.begin();iter!=m.end();iter++)
            {
                if(iter->first.first!=iter->first.second) ans/=2;
            }
        }
        cout<<ans%1000000007<<"\n";
    }
}
