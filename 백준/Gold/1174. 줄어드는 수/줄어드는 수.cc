#include<bits/stdc++.h>
using namespace std;

vector<long long> v;

void f(long long n, int m)
{
    v.push_back(n);
    for(int i=m-1;i>=0;i--) f(n*10+i, i);
}

int main()
{
    for(int i=9;i>=0;i--) f(i, i);
    sort(v.begin(), v.end());
    int n;
    cin>>n;
    n--;
    if(v.size()>=n+1) cout<<v[n];
    else cout<<-1;
}
