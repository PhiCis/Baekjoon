#include<bits/stdc++.h>
using namespace std;

int n, k=1, cnt;

int main()
{
	scanf("%d", &n);
	while(n)
	{
		if(n<k) k=1;
		n-=k;
		k++;
		cnt++;
	}
	printf("%d", cnt);
}