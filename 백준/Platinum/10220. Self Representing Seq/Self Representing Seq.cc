#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=3) cout<<0<<"\n";
        else if(n==4) cout<<2<<"\n";
        else if(n==5) cout<<1<<"\n";
        else if(n==6) cout<<0<<"\n";
        else cout<<1<<"\n";
    }
}