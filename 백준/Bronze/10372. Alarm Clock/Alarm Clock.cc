#include<bits/stdc++.h>
using namespace std;

int n;
int a[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main()
{
	scanf("%d", &n);
	for(int i=0;i<24;i++)
	{
		for(int j=0;j<60;j++)
		{
			if(n==a[i/10]+a[i%10]+a[j/10]+a[j%10])
			{
				printf("%02d:%02d", i, j);
				return 0;
			}
		}
	}
	printf("Impossible");
}