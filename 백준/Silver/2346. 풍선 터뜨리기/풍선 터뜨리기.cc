#include<stdio.h>
#include<deque>
using namespace std;
deque<pair<int, int> > dq;
int n, a;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		dq.push_back({i,a});
	}
	while(1)
	{
		printf("%d ", dq.front().first);
		int cnt=dq.front().second;
		dq.pop_front();
		if(dq.empty()) return 0;
		if(cnt>0)
		{
			for(int i=1;i<cnt;i++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else
		{
			for(int i=1;i<=-cnt;i++)
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
}