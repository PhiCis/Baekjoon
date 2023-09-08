#include<stdio.h>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int> > pq;
int n, i, a;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a);
		if(a==0)
		{
			if(pq.size()==0) printf("0\n");
			else
			{
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else
		{
			pq.push(a);
		}
	}
}