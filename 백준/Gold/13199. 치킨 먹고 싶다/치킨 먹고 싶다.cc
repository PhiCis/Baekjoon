#include<bits/stdc++.h>
using namespace std;

long long n, a, b, c, d;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        b/=a;
        if(b<1) cout<<0<<"\n";
        else cout<<(b-1)*d/(c-d)-(b*d/c)<<"\n";
    }
}
