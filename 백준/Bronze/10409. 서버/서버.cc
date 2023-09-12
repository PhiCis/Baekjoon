#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	scanf("%d%d", &n, &t);
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d", &a);
		t-=a;
		if(t<0)
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("%d", n);
	return 0;
}