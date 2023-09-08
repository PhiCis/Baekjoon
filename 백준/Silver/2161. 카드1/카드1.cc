#include<bits/stdc++.h>
using namespace std;

int n;
queue<int> q;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	}
	printf("%d ", q.front());
	q.pop();
	for(int i=1;i<n;i++)
	{
		q.push(q.front());
		q.pop();
		printf("%d ", q.front());
		q.pop();
	}
}