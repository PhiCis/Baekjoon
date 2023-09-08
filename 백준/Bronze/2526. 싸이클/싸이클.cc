#include<bits/stdc++.h>
using namespace std;

int n, p, a[1010];
int tmp, cnt;

int main()
{
	scanf("%d%d", &n, &p);
	cnt++;
	a[n]=cnt;
	int tmp = n;
	while(1)
	{
		cnt++;
		if(a[tmp*n%p])
		{
			printf("%d", cnt-a[tmp*n%p]);
			return 0;
		}
		a[tmp*n%p]=cnt;
		tmp=tmp*n%p;
	}
}