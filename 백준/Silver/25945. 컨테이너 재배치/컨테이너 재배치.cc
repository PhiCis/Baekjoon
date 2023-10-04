#include<bits/stdc++.h>
using namespace std;

int n, a[1000100];
int s;
int ans;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    pair<int, int> p={s/n, s%n};
    for(int i=1;i<=n;i++)
    {
        if(p.second && a[i]>p.first)
        {
            p.second--;
            ans+=a[i]-p.first-1;
        }
        else if(a[i]>=p.first)
        {
            ans+=a[i]-p.first;
        }
    }
    cout<<ans;
}
