#include<bits/stdc++.h>
using namespace std;


int a[20], b[20], ansa, ansb, ans;

int main()
{
	for(int i=1;i<=10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=10;i++)
	{
		scanf("%d", &b[i]);
	}
	for(int i=1;i<=10;i++)
	{
		if(a[i]>b[i])
		{
			ansa+=3;
			ans = 1;
		}
		else if(a[i]<b[i])
		{
			ansb+=3;
			ans = 2;
		}
		else
		{
			ansa++;
			ansb++;
		}
	}
	printf("%d %d\n", ansa, ansb);
	if(ansa==ansb)
	{
		if(ans==1)
		{
			printf("A");
		}
		else if(ans==2)
		{
			printf("B");
		}
		else printf("D");
	}
	else if(ansa>ansb)
	{
		printf("A");
	}
	else
	{
		printf("B");
	}
}