#include<bits/stdc++.h>
using namespace std;

int a[101];

int main()
{
	for(int i=1;i<=5;i++)
	{
		scanf("%d", &a[i]);
	}
	while(1)
	{
		if(a[1]==1&&a[2]==2&&a[3]==3&&a[4]==4&&a[5]==5) break;
		for(int i=1;i<=4;i++)
		{
			if(a[i]>a[i+1])
			{
				swap(a[i], a[i+1]);
				for(int i=1;i<=5;i++)
				{
					printf("%d ", a[i]);
				}
				printf("\n");
			}
		}
	}
}