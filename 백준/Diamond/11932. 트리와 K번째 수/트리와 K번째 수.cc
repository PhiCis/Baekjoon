#include<bits/stdc++.h>
#define pb push_back
using namespace std;

struct Node{
	int v=0;
	Node* l;
	Node* r;
	
	Node(){ l=r=NULL; v=0; }
	
	Node(int v, Node* l, Node* r)
	{
		this->v=v;
		this->l=l;
		this->r=r;
	}
	Node* update(int s, int e, int t)
	{
		if(s<=t&&t<=e)
		{
			if(s==e) return new Node(this->v+1, NULL, NULL);
			int m=s+e>>1;
			return new Node(v+1, l->update(s, m, t), r->update(m+1, e, t));
		}
		else return this;
	}
};

Node* seg[200020];
int N, Q;
int D[200020], P[200020][20];
int A[200020];
vector<int> adj[200020], idx;
int sz;

int query(int s, int e, Node* u, Node* v, Node* x, Node* px, int k)
{
	if(s==e) return s;
	int tmp = u->l->v+v->l->v-x->l->v-px->l->v;
	int m=s+e>>1;
	if(tmp>=k) return query(s, m, u->l, v->l, x->l, px->l, k);
	else return query(m+1, e, u->r, v->r, x->r, px->r, k-tmp);
}

int getidx(int x)
{
	return lower_bound(idx.begin(), idx.end(), x)-idx.begin()+1;
}

int LCA(int u, int v)
{
	if(D[u]>D[v]) swap(u, v);
	for(int i=18;i>=0;i--)
	{
		if(D[v]-D[u]>=(1<<i))
		{
			v=P[v][i];
		}
	}
	if(u==v) return u;
	for(int i=18;i>=0;i--)
	{
		if(P[u][i]!=P[v][i])
		{
			u=P[u][i], v=P[v][i];
		}
	}
	return P[u][0];
}

int main()
{
	scanf("%d%d", &N, &Q); //정점 개수와 쿼리 개수를 입력받는다. 
	for(int i=1;i<=N;i++)
	{
		scanf("%d", &A[i]); //정점의 가중치를 입력받는다. 
		idx.push_back(A[i]); //idx는 정점의 가중치를 오름차순으로 정렬한다. 
	}
	
	sort(idx.begin(), idx.end());
	idx.erase(unique(idx.begin(), idx.end()), idx.end());
	sz = idx.size(); //sz는 idx의 크기이다. 
	
	for(int i=1;i<N;i++) //트리를 구성한다. 
	{
		int u, v;
		scanf("%d%d", &u, &v);
		adj[u].pb(v), adj[v].pb(u);
	}
	
	seg[0] = new Node(0, NULL, NULL); //0번 세그먼트 트리는 모두 비어 있는 상태이다. 
	seg[0]->l = seg[0]->r = seg[0];
	
	stack<int> S;
	D[1]=1;
	S.push(1);
	while(!S.empty())
	{
		int u = S.top(); S.pop();
		int p = P[u][0];
		seg[u]=seg[p]->update(1, sz, getidx(A[u])); //u번째 세그먼트 트리는 p번 세그먼트 트리에서 A[u] 값을 추가한 상태이다. 
		for(auto v:adj[u])
		{
			if(v==p) continue;
			D[v]=D[u]+1;
			P[v][0]=u;
			S.push(v);
		}
	}
	for(int i=1;i<=18;i++)
	{
		for(int j=1;j<=N;j++)
		{
			P[j][i]=P[P[j][i-1]][i-1];
		}
	}
	while(Q--)
	{
		int u, v, k;
		scanf("%d%d%d", &u, &v, &k);
		int x = LCA(u, v);
		if(k<=0||k>D[u]+D[v]-D[x]-D[P[x][0]]) printf("-1\n");
		else printf("%d\n", idx[query(1, sz, seg[u], seg[v], seg[x], seg[P[x][0]], k)-1]);
	}
}