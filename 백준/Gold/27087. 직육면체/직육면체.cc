#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c, p;
        cin>>a>>b>>c>>p;
        if((a%p==0)+(b%p==0)+(c%p==0)>=2) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
}