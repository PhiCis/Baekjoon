#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	if(n<3 || n%2==1) printf("NIE");
	else
	{
		printf("0 0\n2 0\n2 2\n");
		int x = 2, y = 2;
		for(int i=1;i<=(n-4)/2;i++)
		{
			if(i%2==1)
			{
				printf("%d %d\n%d %d\n", x-1, y, x-1, y+2);
				x--;
				y+=2;
			}
			else
			{
				printf("%d %d\n%d %d\n", x+1, y, x+1, y+1);
				x++;
				y++;
			}
		}
		printf("0 %d\n", y);
	}
}