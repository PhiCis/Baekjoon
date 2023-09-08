#include<stdio.h>
#include<vector>
using namespace std;
vector<int> s;
int a[200020], cnt;
int n, pnt, m, i;
int main()
{
	scanf("%d", &n);
	pnt=1;
	for(i=1;i<=n;i++)
	{
		scanf("%d", &m);
		while(pnt<=m)
		{
			s.push_back(pnt);
			a[++cnt]=1;
			pnt++;
		}
		if(s.back()!=m)
		{
			printf("NO");
			return 0;
		}
		else
		{
			s.pop_back();
			a[++cnt]=-1;
		}
	}
	for(i=1;i<=cnt;i++)
	{
		if(a[i]==1) printf("+\n");
		else printf("-\n");
	}
}
