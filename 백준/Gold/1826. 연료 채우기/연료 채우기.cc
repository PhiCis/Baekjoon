#include<bits/stdc++.h>
using namespace std;
struct A{
	int a, b;
}A[10010];
priority_queue<int> pq;
bool cmp(struct A t, struct A s)
{
	return t.a<s.a;
}
int n, pnt, l, p, ans;
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &A[i].a, &A[i].b);
	}
	sort(A, A+n, cmp);
	scanf("%d%d", &l, &p);
	while(p<l)
	{
		while(A[pnt].a<=p&&pnt<n)
		{
			if(pnt==n) break;
			pq.push(A[pnt].b);
			pnt++;
		}
		if(pq.empty()) break;
		ans++;
		p+=pq.top();
		pq.pop();
	}
	printf("%d\n", p<l?-1:ans);
}