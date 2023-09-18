#include<bits/stdc++.h>
using namespace std;

int n, a[300000], b[300000];
int ans;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i])
        {
            if(a[i-1]) ans++;
            else ans+=3;
        }
        if(b[i])
        {
            if(b[i-1]) ans++;
            else ans+=3;
        }
        if(a[i]&&b[i]&&(i&1)) ans-=2;
    }
    cout<<ans;
}