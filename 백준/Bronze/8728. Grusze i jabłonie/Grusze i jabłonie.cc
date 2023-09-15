#include<bits/stdc++.h>
using namespace std;
int n, a[1000010];
int A, B, C, D;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) if(a[i]==0){A=i;break;}
    for(int i=n;i>=1;i--) if(a[i]==0){B=i;break;}
    for(int i=1;i<=n;i++) if(a[i]==1){C=i;break;}
    for(int i=n;i>=1;i--) if(a[i]==1){D=i;break;}
    cout<<max(abs(A-D), abs(B-C));
}