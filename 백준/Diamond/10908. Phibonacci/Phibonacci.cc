#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;

ll n, k, a[2][2]={1, 1, 1, 0}, ff[2][2]={1, 0, 0, 1};

void calc_FF(ll k) // F_k를 미리 구하는 함수  
{
	while(k)
	{
		if(k&1)
		{
			ll tmp[2][2];
			tmp[0][0]=((a[0][0]*ff[0][0])%MOD+(a[0][1]*ff[1][0])%MOD)%MOD;
			tmp[0][1]=((a[0][0]*ff[0][1])%MOD+(a[0][1]*ff[1][1])%MOD)%MOD;
			tmp[1][0]=((a[1][0]*ff[0][0])%MOD+(a[1][1]*ff[1][0])%MOD)%MOD;
			tmp[1][1]=((a[1][0]*ff[0][1])%MOD+(a[1][1]*ff[1][1])%MOD)%MOD;
			ff[0][0]=tmp[0][0];
			ff[0][1]=tmp[0][1];
			ff[1][0]=tmp[1][0];
			ff[1][1]=tmp[1][1];
		}
		ll tmp[2][2];
		tmp[0][0]=((a[0][0]*a[0][0])%MOD+(a[0][1]*a[1][0])%MOD)%MOD;
		tmp[0][1]=((a[0][0]*a[0][1])%MOD+(a[0][1]*a[1][1])%MOD)%MOD;
		tmp[1][0]=((a[1][0]*a[0][0])%MOD+(a[1][1]*a[1][0])%MOD)%MOD;
		tmp[1][1]=((a[1][0]*a[0][1])%MOD+(a[1][1]*a[1][1])%MOD)%MOD;
		a[0][0]=tmp[0][0];
		a[0][1]=tmp[0][1];
		a[1][0]=tmp[1][0];
		a[1][1]=tmp[1][1];
		k>>=1;
	}
	return;
}

ll FF(ll n, int b) // F_nk-1을 구하는 함수  
{
	ll ans[2][2]={1, 0, 0, 1};
	ll ff2[2][2];
	ff2[0][0]=ff[0][0];
	ff2[0][1]=ff[0][1];
	ff2[1][0]=ff[1][0];
	ff2[1][1]=ff[1][1];
	while(n)
	{
		if(n&1)
		{
			ll tmp[2][2];
			tmp[0][0]=((ff2[0][0]*ans[0][0])%MOD+(ff2[0][1]*ans[1][0])%MOD)%MOD;
			tmp[0][1]=((ff2[0][0]*ans[0][1])%MOD+(ff2[0][1]*ans[1][1])%MOD)%MOD;
			tmp[1][0]=((ff2[1][0]*ans[0][0])%MOD+(ff2[1][1]*ans[1][0])%MOD)%MOD;
			tmp[1][1]=((ff2[1][0]*ans[0][1])%MOD+(ff2[1][1]*ans[1][1])%MOD)%MOD;
			ans[0][0]=tmp[0][0];
			ans[0][1]=tmp[0][1];
			ans[1][0]=tmp[1][0];
			ans[1][1]=tmp[1][1];
		}
		ll tmp[2][2];
		tmp[0][0]=((ff2[0][0]*ff2[0][0])%MOD+(ff2[0][1]*ff2[1][0])%MOD)%MOD;
		tmp[0][1]=((ff2[0][0]*ff2[0][1])%MOD+(ff2[0][1]*ff2[1][1])%MOD)%MOD;
		tmp[1][0]=((ff2[1][0]*ff2[0][0])%MOD+(ff2[1][1]*ff2[1][0])%MOD)%MOD;
		tmp[1][1]=((ff2[1][0]*ff2[0][1])%MOD+(ff2[1][1]*ff2[1][1])%MOD)%MOD;
		ff2[0][0]=tmp[0][0];
		ff2[0][1]=tmp[0][1];
		ff2[1][0]=tmp[1][0];
		ff2[1][1]=tmp[1][1];
		n>>=1;
	}
	if(b==1) return ans[0][0]; 
	if(b==0) return ans[0][1];
	if(b==-1) return ans[1][1];
}

ll KNK(ll n, ll k) //F_kn을  F_k로 나눈 값을 구하는 함수  
{
	ll ans[2][2]={1, 0, 0, 1};
	ll knk[2][2];
	knk[0][0]=(FF(1, 1)+FF(1, -1))%MOD;
	knk[0][1]=k&1?1:(MOD-1);
	knk[1][0]=1;
	knk[1][1]=0;
	while(n)
	{
		if(n&1)
		{
			ll tmp[2][2];
			tmp[0][0]=((knk[0][0]*ans[0][0])%MOD+(knk[0][1]*ans[1][0])%MOD)%MOD;
			tmp[0][1]=((knk[0][0]*ans[0][1])%MOD+(knk[0][1]*ans[1][1])%MOD)%MOD;
			tmp[1][0]=((knk[1][0]*ans[0][0])%MOD+(knk[1][1]*ans[1][0])%MOD)%MOD;
			tmp[1][1]=((knk[1][0]*ans[0][1])%MOD+(knk[1][1]*ans[1][1])%MOD)%MOD;
			ans[0][0]=tmp[0][0];
			ans[0][1]=tmp[0][1];
			ans[1][0]=tmp[1][0];
			ans[1][1]=tmp[1][1];
		}
		ll tmp[2][2];
		tmp[0][0]=((knk[0][0]*knk[0][0])%MOD+(knk[0][1]*knk[1][0])%MOD)%MOD;
		tmp[0][1]=((knk[0][0]*knk[0][1])%MOD+(knk[0][1]*knk[1][1])%MOD)%MOD;
		tmp[1][0]=((knk[1][0]*knk[0][0])%MOD+(knk[1][1]*knk[1][0])%MOD)%MOD;
		tmp[1][1]=((knk[1][0]*knk[0][1])%MOD+(knk[1][1]*knk[1][1])%MOD)%MOD;
		knk[0][0]=tmp[0][0];
		knk[0][1]=tmp[0][1];
		knk[1][0]=tmp[1][0];
		knk[1][1]=tmp[1][1];
		n>>=1;
	}
	return ans[1][0];
}

int main()
{
	scanf("%lld%lld", &n, &k);
	assert(n>=0&&n<=1e12);
	assert(k>=1&&k<=1e12);
	calc_FF(k);
	ll A=KNK(n, k);
	ll B=((A*FF(1, -1)%MOD)*(MOD-1)+FF(n, -1))%MOD;
	printf("%lld %lld\n", A, B);
}