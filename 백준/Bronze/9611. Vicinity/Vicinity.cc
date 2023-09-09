#include<bits/stdc++.h>
using namespace std;

int n, m, a, b, x[1100], y[1100];

int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        int ans=0;
        for(int j=1;j<=n;j++){
            if((x[a]-x[j])*(x[a]-x[j])+(y[a]-y[j])*(y[a]-y[j])<=b*b) ans++;
        }
        cout<<ans-1<<"\n";
    }
}