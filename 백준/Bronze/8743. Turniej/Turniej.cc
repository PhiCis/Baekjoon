#include<bits/stdc++.h>
using namespace std;
int n, a, b;
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a<b) cout<<a<<"\n";
        else cout<<b-1<<"\n";
    }
}