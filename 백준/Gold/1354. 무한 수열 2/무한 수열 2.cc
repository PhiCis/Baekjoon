#include<bits/stdc++.h>
using namespace std;

long long n, p, q, x, y;
unordered_map<long long, long long> m;

long long f(long long n)
{
    if(n<=0) return 1;
    else if(m[n]) return m[n];
    else
    {
        return m[n]=f(n/p-x)+f(n/q-y);
    }
}

int main()
{
    cin>>n>>p>>q>>x>>y;
    cout<<f(n);
}
