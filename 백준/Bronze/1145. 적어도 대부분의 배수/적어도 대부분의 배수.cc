#include<bits/stdc++.h>
using namespace std;

int a[5];

int main()
{
	for(int i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=1000000;i++)
	{
		int ans = 0;
		for(int j=0;j<5;j++)
		{
			if(i%a[j]==0) ans++;
		}
		if(ans>=3)
		{
			printf("%d", i);
			return 0;
		}
	}
}