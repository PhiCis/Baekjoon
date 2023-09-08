#include<bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, less<int> > pql;
priority_queue<int, vector<int>, greater<int> > pqr;

int n, a;
int main()
{
	scanf("%d", &n);
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
		printf("%d\n", pql.top());
	}
}