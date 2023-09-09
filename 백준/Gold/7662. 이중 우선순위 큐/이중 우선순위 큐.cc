#include<bits/stdc++.h>
using namespace std;

int t, k, n;
char c;
multiset<int> s;

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &k);
		s.clear();
		while(k--)
		{
			scanf(" %c%d", &c, &n);
			if(c=='I') s.insert(n);
			else
			{
				if(s.empty()) continue;
				if(n==1) s.erase(--s.end());
				else s.erase(s.begin());
			}
		}
		if(s.empty()) printf("EMPTY\n");
		else
		{
			printf("%d %d\n", *(--s.end()), *s.begin());
		}
	}
}