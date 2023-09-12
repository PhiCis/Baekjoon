#include<stdio.h>
#include<math.h>
#include<queue>
#include<algorithm>
using namespace std;

struct cmp{
	bool operator()(int t, int u)
	{
		if(abs(t)==abs(u)) return t>u;
		return abs(t)>abs(u);
	}
};
priority_queue<int, vector<int>, cmp> pq;

int n, i, a;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a);
		if(a==0)
		{
			if(pq.size()==0)
			{
				printf("0\n");
			}
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