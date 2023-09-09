#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll S[1000010], X[1000010], D[1000010], pos, n, a, b, c;

struct Line 
{
	ll A, B; 
};

double cross(const Line &p, const Line &q) 
{ 
	return (double)(q.B-p.B)/(p.A-q.A); 
}

vector<Line> V;

void update(Line p)
{
    while(V.size()>1 && cross(V[V.size()-1], p)<=cross(V[V.size()-1], V[V.size()-2])) V.pop_back();
    V.push_back(p);
}

ll query1(ll x)
{
    int lo=0, hi=V.size();
    while(lo+1<hi)
    {
        int mid=lo+hi>>1;
        if(cross(V[mid], V[mid-1])<=x) lo=mid;
        else hi=mid;
    }
    return V[lo].A*x+V[lo].B;
}

ll query2(ll x)
{
    if(V.size()<=pos) pos=V.size()-1;
    else while(pos+1<V.size()&&cross(V[pos+1], V[pos])<=x) pos++;
    return V[pos].A*x+V[pos].B;
}


int main()
{
	scanf("%lld", &n);
	scanf("%lld%lld%lld", &a, &b, &c);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &X[i]);
		S[i]=S[i-1]+X[i];
	}
	update({0, 0});
	for(int i=1;i<=n;i++)
	{
		D[i]=query2(S[i])+a*S[i]*S[i]+b*S[i]+c;
		update({-2*a*S[i], D[i]+a*S[i]*S[i]-b*S[i]});
		//printf("%d: %lld\n", i, D[i]);
	}
	printf("%lld", D[n]);
}