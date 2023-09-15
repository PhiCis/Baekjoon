#include<bits/stdc++.h>
using namespace std;
int n, a, m=2e9;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        m=min(m, a);
    }
    cout<<m<<".00";
}