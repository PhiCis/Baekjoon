#include<bits/stdc++.h>
using namespace std;

struct A{
	int a, b, c;
};

A a[1010];

bool cmp(A a, A b)
{
	if(a.a>b.a) return 1;
	if(a.a<b.a) return 0;
	if(a.b>b.b) return 1;
	if(a.b<b.b) return 0;
	if(a.c>b.c) return 1;
	else return 0;
}

int n, k;
int ans = 1;

int main()
{
	scanf("%d%d", &n, &k);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d", &t);
		scanf("%d%d%d", &a[t].a, &a[t].b, &a[t].c);
	}
	for(int i=1;i<=n;i++)
	{
		if(cmp(a[i], a[k])==1) ans++;
	}
	printf("%d", ans);
}