#include<bits/stdc++.h>
using namespace std;
#define int long long
pair<int, int> EEA(int a, int b)
{
    int r0=a, r1=b;
    int s0=1, s1=0;
    int t0=0, t1=1;
    int temp=0, q=0;
  
    while(r1)
    {
        q=r0/r1;
        temp=r0; r0=r1; r1=temp-r1*q;
        temp=s0; s0=s1; s1=temp-s1*q;
        temp=t0; t0=t1; t1=temp-t1*q;
    }
    return {s0, t0};
}
int t, a, b, h, w;
pair<int, int> p;
signed main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>h>>w;
        int g=gcd(a, b);
        if(h%g!=0 || w%g!=0)
        {
            cout<<"NO\n";
            goto skip;
        }
        a/=g; b/=g; h/=g; w/=g;
        if((h%a==0 && w%b==0) || (h%b==0 && w%a==0))
        {
            cout<<"YES\n";
            goto skip;
        }
        p=EEA(a, b);
//        cout<<p.first<<p.second;
        p.first=(p.first+b)*h%b;
        p.second=(p.second+a)*h%a;
        if(p.first*a+p.second*b<=h && w%(a*b)==0)
        {
            cout<<"YES\n";
            goto skip;
        }
        p=EEA(a, b);
//        cout<<p.first<<p.second;
        p.first=(p.first+b)*w%b;
        p.second=(p.second+a)*w%a;
        if(p.first*a+p.second*b<=w && h%(a*b)==0)
        {
            cout<<"YES\n";
            goto skip;
        }
        cout<<"NO\n";
    skip:;
    }
}
