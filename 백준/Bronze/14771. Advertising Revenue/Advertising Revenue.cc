#include<bits/stdc++.h>
using namespace std;

int n, m, a[1010], b[1010], c, d, e;

int main() 
{
    int t;
    cin>>t;
    for(int x=1;x<=t;x++)
    {
        int ans=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i]>>b[i];
        }
        for(int i=1;i<=m;i++)
        {
            cin>>c>>d>>e;
            if(a[c]) ans+=b[c];
            if(a[d]) ans+=b[d];
            if(e==1 && (!a[c])) ans+=b[c];
            if(e==2 && (!a[d])) ans+=b[d];
        }
        cout<<"Data Set "<<x<<":\n"<<ans<<"\n\n";
    }
}