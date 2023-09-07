#include<bits/stdc++.h>
using namespace std;

int n, m;
string s[1010];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>s[i];
    sort(s+1, s+n+1);
    cout<<s[m];
}