#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, cnt=2;
	scanf("%d%d", &a, &b);
	while(1)
	{
		cnt++;
		int tmp = a-b;
		if(tmp>b) break;
		a=b;
		b=tmp;
	}
	printf("%d", cnt);
}