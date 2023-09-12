#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	queue<int> q;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	}
	for(int i=1;i<n;i++)
	{
		long long tmp = ((long long)i*i*i-1)%q.size()+1;
		for(int j=1;j<tmp;j++)
		{
			q.push(q.front());
			q.pop();
		}
		q.pop();
	}
	printf("%d", q.front());
}