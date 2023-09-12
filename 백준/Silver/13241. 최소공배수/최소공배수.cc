#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a,b;
int main(){
    scanf("%lld%lld",&a,&b);
    printf("%lld", a/__gcd(a,b)*b);
 }