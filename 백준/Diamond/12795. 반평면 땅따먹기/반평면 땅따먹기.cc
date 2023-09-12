#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll inf=2000000000000000000;

struct Line{
	ll a, b;
	ll get(ll x)
	{
		return a*x+b;
	}
};

struct Node{
	ll l, r, s, e;
	Line line;
};

vector<Node> tree;

void init(ll s, ll e)
{
	tree.push_back({-1, -1, s, e, {0, -inf}});
}

void update(ll node, Line v)
{
	ll s = tree[node].s, e = tree[node].e;
	ll m = s+e>>1;
	
	Line low = tree[node].line, high = v;//새로 들어온 직선과 이미 있던 직선
	if(low.get(s)>high.get(s)) swap(low, high);
	if(low.get(e)<=high.get(e)) //high가 항상 높음
	{
		tree[node].line = high; 
		return;
	} 
	if(low.get(m)<high.get(m))
	{
		tree[node].line = high;
		if(tree[node].r==-1)
		{
			tree[node].r = tree.size();
			tree.push_back({-1, -1, m+1, e, {0, -inf}});
		}
		update(tree[node].r, low);
	}
	else
	{
		tree[node].line = low;
		if(tree[node].l==-1)
		{
			tree[node].l = tree.size();
			tree.push_back({-1, -1, s, m, {0, -inf}});
		}
		update(tree[node].l, high);
	}
	
}

ll query(ll node, ll x)
{
	if(node==-1) return -inf;
	ll s = tree[node].s, e = tree[node].e;
	ll m = s+e>>1;
	if(x<=m) return max(tree[node].line.get(x), query(tree[node].l, x));
	else return max(tree[node].line.get(x), query(tree[node].r, x));
}

ll q;

int main()
{
	scanf("%lld", &q);
	init(-2e12, 2e12);
	while(q--)
	{
		ll a, b, c;
		scanf("%lld", &a);
		if(a==1)
		{
			scanf("%lld%lld", &b, &c);
			update(0, {b, c});
		}
		else
		{
			scanf("%lld", &b);
			printf("%lld\n", query(0, b));
		}
	}
}