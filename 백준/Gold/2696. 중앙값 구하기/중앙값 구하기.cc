#include<bits/stdc++.h>
using namespace std;
int t, n, a;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		priority_queue<int, vector<int>, less<int> > pql;
		priority_queue<int, vector<int>, greater<int> > pqr;
		scanf("%d", &n);
		printf("%d\n", n+1>>1);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a);
			if(i==1) pql.push(a);
			else if(i&1)
			{
				if(pqr.top()>a) pql.push(a);
				else
				{
					pql.push(pqr.top());
					pqr.pop();
					pqr.push(a);
				}
			}
			else
			{
				if(pql.top()<a) pqr.push(a);
				else
				{
					pqr.push(pql.top());
					pql.pop();
					pql.push(a);
				}
			}
			if(i&1) printf("%d ", pql.top());
		}
		printf("\n");
	}
}