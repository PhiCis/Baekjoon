#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	if(n%2==0||n%5==0)
	{
		printf("-1");
		return 0;
	}
	int tmp=1;
	int cnt=1;
	while(1)
	{
		if(tmp%n==0)
		{
			printf("%d", cnt);
			return 0;
		}
		tmp*=10;
		tmp++;
		tmp%=n;
		cnt++;
	}
}