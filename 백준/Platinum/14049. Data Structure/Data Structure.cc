#include<bits/stdc++.h>
using namespace std;

long long n;
int q;
pair<int, int> a[100010];
vector<pair<int, int> > v;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    cin>>n>>q;
    for(int i=0;i<q;i++)
    {
        cin>>a[i].second>>a[i].first;
        a[i].second-=a[i].first;
    }
    sort(a, a+q);
    int m=2e9;
    for(int i=0;i<q;i++)
    {
        if(m>a[i].second)
        {
            v.push_back(a[i]);
            m=a[i].second;
        }
    }
    long long ans=0;
    for(int i=0;i<v.size();i++)
    {
        ans+=(n-v[i].first-v[i].second+1)*(n-v[i].first-v[i].second+2)/2;
    }
    for(int i=1;i<v.size();i++)
    {
        int tmp=v[i-1].second+v[i].first;
        if(tmp>n) continue;
        ans-=(n-tmp+1)*(n-tmp+2)/2;
    }
    cout<<ans;
}
