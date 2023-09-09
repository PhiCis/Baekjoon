#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)>0)
	{
		int cnt=1, tmp=1;
		if(n==1)
		{
			printf("%d\n", cnt);
			continue;
		}
		while(tmp)
		{
			tmp*=10;
			tmp+=1;
			tmp%=n;
			cnt++;
		}
		printf("%d\n", cnt);
	}
}