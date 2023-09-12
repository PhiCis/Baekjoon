#include<stdio.h>
int t, n, i, j, k;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		i=1;
		while(1)
		{
			j=1;
			while(1)
			{
				k=1;
				while(1)
				{
					if(n>i*(i+1)/2+j*(j+1)/2+k*(k+1)/2)
					{
						k++;
					}
					else if(n==i*(i+1)/2+j*(j+1)/2+k*(k+1)/2)
					{
						printf("1\n");
						goto skip;
					}
					else break;
				}
				j++;
				if(n<i*(i+1)/2+j*(j+1)/2) break;
			}
			i++;
			if(n<i*(i+1)/2) break;
		}
		printf("0\n");
		skip:;
	}
}