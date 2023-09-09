#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000009
ll t, a, b, c, d;
ll A[200][200];

ll power(ll a, ll b){
    if(b==0) return 1;
    ll tmp=power(a, b/2);
    if(b&1) return tmp*tmp%mod*a%mod;
    else return tmp*tmp%mod;
}

ll factorial(ll n){
    ll ans[4]={1,0,0,1};
    ll a[4]={1,1,1,0};
    ll tmp[4];
    while(n){
        if(n&1){
            tmp[0]=ans[0]*a[0]+ans[1]*a[2];
            tmp[1]=ans[0]*a[1]+ans[1]*a[3];
            tmp[2]=ans[2]*a[0]+ans[3]*a[2];
            tmp[3]=ans[2]*a[1]+ans[3]*a[3];
            for(int i=0;i<4;i++) ans[i]=tmp[i]%mod;
        }
        n/=2;
        tmp[0]=a[0]*a[0]+a[1]*a[2];
        tmp[1]=a[0]*a[1]+a[1]*a[3];
        tmp[2]=a[2]*a[0]+a[3]*a[2];
        tmp[3]=a[2]*a[1]+a[3]*a[3];
        for(int i=0;i<4;i++) a[i]=tmp[i]%mod;
    }
    return ans[1];
}

ll calc(ll c, ll d){
    ll ans=factorial(d+2*c-1);
    for(int i=1;i<=c;i++){
        ll tmp=(A[c][i]-factorial(i+2*c-1)+mod)%mod;
        for(int j=1;j<=c;j++){
            if(i==j) continue;
            tmp=tmp*(d-j+mod)%mod;
            tmp=tmp*power(i-j+mod, mod-2)%mod;
        }
        ans=(ans+tmp)%mod;
    }
    return ans;
}

int main(){
    A[0][2]=A[0][3]=1;
    for(int i=4;i<=100;i++){
        A[0][i]=(A[0][i-1]+A[0][i-2])%mod;
    }
    for(int i=1;i<=100;i++){
        A[i][2]=1;
        for(int j=3;j<=100;j++){
            A[i][j]=(A[i-1][j]+A[i][j-1])%mod;
        }
    }
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        cout<<(calc(c, d)*b%mod+calc(c-1, d+1)*a%mod)%mod<<"\n";
    }
}
