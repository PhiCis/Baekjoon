#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll A[100010], B[100010], D[100010], pos, n;

struct Line 
{
	ll a, b; 
};

double cross(const Line &p, const Line &q) 
{ 
	return (double)(q.b-p.b)/(p.a-q.a); 
}

vector<Line> S;

void update(Line p)
{
    while(S.size()>1 && cross(S[S.size()-1], p)<=cross(S[S.size()-1], S[S.size()-2])) S.pop_back();
    S.push_back(p);
}

ll query2(ll x)
{
    if(S.size()<=pos) pos=S.size()-1;
    else while(pos+1<S.size()&&cross(S[pos+1], S[pos])<=x) pos++;
    return S[pos].a*x+S[pos].b;
}


int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &A[i]);
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &B[i]);
	}
	update({B[1], D[1]});
	for(int i=2;i<=n;i++)
	{
		D[i]=query2(A[i]);
		update({B[i], D[i]});
	}
	printf("%lld", D[n]);
}