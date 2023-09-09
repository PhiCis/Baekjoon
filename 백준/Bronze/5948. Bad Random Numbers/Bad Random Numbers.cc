#include<bits/stdc++.h>
using namespace std;

int a[10000];
int n, tmp;

int main()
{
	scanf("%d", &n);
	while(1)
	{
		tmp++;
		n=(n%1000/10)*(n%1000/10);
		if(a[n])
		{
			printf("%d", tmp);
			return 0;
		}
		
		a[n]=1;
	}
}