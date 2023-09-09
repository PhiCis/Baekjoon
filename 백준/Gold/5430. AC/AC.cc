#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		int n, k, swt=1, sz;
		char g;
		deque<int> dq;
		char a[100010]={0};
		scanf(" %s", a);
		scanf("%d", &n);
		scanf(" %c", &g);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &k);
			scanf(" %c", &g);
			dq.push_back(k);
		}
		if(n==0) scanf(" %c", &g);
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='R') swt*=-1;
			else
			{
				if(dq.empty())
				{
					printf("error\n");
					goto skip;
				}
				else if(swt==1) dq.pop_front();
				else dq.pop_back();
			}
		}
		printf("[");
		sz=dq.size();
		for(int i=1;i<sz;i++)
		{
			if(swt==1) printf("%d,", dq.front()), dq.pop_front();
			else printf("%d,", dq.back()), dq.pop_back();
		}
		if(sz!=0)
		{
			if(swt==1) printf("%d", dq.front());
			else printf("%d", dq.back());
		}
		printf("]\n");
		skip:;
	}
}