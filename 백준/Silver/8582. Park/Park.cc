#include<bits/stdc++.h>
using namespace std;

int n, a[1000010], b[1000010], c[1000010];
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) b[i]=max(b[i-1], a[i]);
    for(int i=n;i>=1;i--) c[i]=max(c[i+1], a[i]);
    for(int i=1;i<=n;i++) cout<<b[i]<<" "<<c[i]<<"\n";
}
