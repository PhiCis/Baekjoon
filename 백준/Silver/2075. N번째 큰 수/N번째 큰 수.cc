#include<stdio.h>
#include<queue>
using namespace std;
int n, i, a;
priority_queue<int, vector<int>, greater<int> > pq;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n*n;i++)
	{
		scanf("%d", &a);
		pq.push(a);
		if(pq.size()>n)
		{
			pq.pop();
		}
	}
	printf("%d", pq.top());
}