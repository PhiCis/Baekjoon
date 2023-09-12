#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
struct point{
	ll x, y;
};
 
ll delta(point A, point B, point C)
{
	return A.x*B.y-B.x*A.y+B.x*C.y-C.x*B.y+C.x*A.y-A.x*C.y;
}
 
bool collinear(point A, point B, point C)
{
	return delta(A, B, C)==0;
}
 
int main()
{
	ll n, per, target, cnt;
	point p[100010];
	
	scanf("%lld", &n);
	
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, n-1);
	
	if(n==1)
	{
		printf("possible");
		return 0;
	}
	scanf("%lld", &per);
	target=(n*per+99)/100;
	//printf("%d\n", target);
	for(ll i=0;i<n;i++)
	{
		scanf("%lld%lld", &p[i].x, &p[i].y);
	}
	ll k=5000;
	while(k--)
	{
		cnt=0;
		int p1=dis(gen);
		int p2=dis(gen);
		//printf("%d %d\n", p1, p2);
		while(p1==p2) p1=dis(gen);
		for(ll i=0;i<n;i++)
		{
			if(collinear(p[p1], p[p2], p[i])) cnt++;
		}
		if(cnt>=target)
		{
			//printf("%d\n", cnt);
			printf("possible");
			return 0;
		}
	}
	printf("impossible");
	
}