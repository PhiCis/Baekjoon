#include<bits/stdc++.h>
using namespace std;

int t, n, k, a, b, c, d;


int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d" ,&n, &k);
		vector<pair<int, int> > A(n+1, {0, 0});
		for(int i=1;i<=k;i++)
		{
			scanf("%d%d%d%d", &a, &b, &c ,&d);
			A[a].first+=c, A[a].second+=d;
			A[b].first+=d, A[b].second+=c;
		}
		int M=0, m=1e9;
		for(int i=1;i<=n;i++)
		{
			int tmp;
			if(A[i].first==0&&A[i].second==0) tmp=0;
			else tmp=int(1000.0*A[i].first*A[i].first/(A[i].first*A[i].first+A[i].second*A[i].second));
			M=max(M, tmp);
			m=min(m, tmp);
		}
		printf("%d\n%d\n", M, m);
	}
}