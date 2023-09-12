#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, a;
	list<int> l;
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		l.push_back(i);
	}
//	for(list<int>::iterator iter=l.begin();iter!=l.end();iter++)
//	{
//		printf("%d ", *iter);
//	}
	for(int i=1;i<=k;i++)
	{
		scanf("%d", &a);
		int cnt=0;
		for(list<int>::iterator iter=l.begin();iter!=l.end();iter++)
		{
			cnt++;
			if(cnt==a)
			{
				iter=l.erase(iter);
				cnt=1;
			}
			if(iter==l.end()) break;
		}
	}
	while(!l.empty())
	{
		printf("%d\n", l.front());
		l.pop_front();
	}
}