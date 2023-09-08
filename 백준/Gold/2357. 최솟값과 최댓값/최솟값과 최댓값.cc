#include<bits/stdc++.h>
using namespace std;
#define INF 2e9
int n, m, a, b, T[400400][2];
void update(int id, int s, int e, int target, int data)
{
	if(target<s||target>e) return;
	if(s==e)
	{
		T[id][0]=T[id][1]=data;
		return;
	}
	int m=s+e>>1;
	update(id*2, s, m, target, data);
	update(id*2+1, m+1, e, target, data);
	T[id][0]=min(T[id*2][0], T[id*2+1][0]);
	T[id][1]=max(T[id*2][1], T[id*2+1][1]);
}
int MIN(int id, int s, int e, int l, int r)
{
	if(r<s||e<l) return INF;
	if(s>=l&&r>=e)
	{
		return T[id][0];
	}
	int m=s+e>>1;
	return min(MIN(id*2, s, m, l, r), MIN(id*2+1, m+1, e, l, r));
	
}
int MAX(int id, int s, int e, int l, int r)
{
	if(r<s||e<l) return 0;
	if(s>=l&&r>=e)
	{
		return T[id][1];
	}
	int m=s+e>>1;
	return max(MAX(id*2, s, m, l, r), MAX(id*2+1, m+1, e, l, r));
	
}

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		update(1, 1, n, i, a);
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d", &a, &b);
		printf("%d %d\n", MIN(1, 1, n, a, b), MAX(1, 1, n, a, b));
	}
}