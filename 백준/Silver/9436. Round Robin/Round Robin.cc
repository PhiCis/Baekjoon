#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n, k;
		list<int> l;
		scanf("%d", &n);
		if(n==0) return 0;
		scanf("%d", &k);
		for(int i=1;i<=n;i++)
		{
			l.push_back(0);
		}
		list<int>::iterator iter=l.begin();
		re:
		for(int i=1;i<=k;i++)
		{
			(*iter)++;
			iter++;
			if(iter==l.end()) iter=l.begin();
		}
		if(iter==l.begin()) l.pop_back();
		else
		{
			iter--;
			iter=l.erase(iter);
		}
		
		int tmp=*(l.begin());
		for(list<int>::iterator it=l.begin();it!=l.end();it++)
		{
			if(tmp!=*it)
			{
				goto re;
			}
		}
		printf("%d %d\n", l.size(), tmp);
	}
}