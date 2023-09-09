#include<bits/stdc++.h>
using namespace std;

int main()
{
	for(int i=100;i<=999;i++)
	{
		for(int j=i+1;j<=999;j++)
		{
			if(i%111==0||j%111==0) continue;
			if(i*(j%100)==(i/10)*j && j/100==i%10)
			{
				printf("%d / %d = %d / %d\n", i, j, i/10, j%100);
			}
		}
	}
}