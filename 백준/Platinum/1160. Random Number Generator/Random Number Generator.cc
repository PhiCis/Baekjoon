#include<bits/stdc++.h>
using namespace std;
#define mod 10000
typedef long long ll;

ll m, a, c, x, n, g;

pair<ll, ll> power(ll a, ll c, ll n)
{
	if(n==0) return {1, 0};
	pair<ll, ll> tmp=power(a, c, n/2);
	tmp={(ll)((__int128_t)tmp.first*tmp.first%m), (ll)(((__int128_t)tmp.first*tmp.second+tmp.second)%m)};
	if(n%2==0) return tmp;
	else return {(ll)((__int128_t)tmp.first*a%m), (ll)(((__int128_t)tmp.second*a+c)%m)};
}

int main()
{
	cin>>m>>a>>c>>x>>n>>g;
	pair<ll, ll> ans=power(a, c, n);
	cout<<(ll)(((__int128_t)ans.first*x+ans.second)%m%g);
}