#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a, c;
		char b;
		scanf("%d %c %d", &a, &b, &c);
		if(a==0&&c==0) return 0;
		if(b=='W')
		{
			if(a-c<-200)
			{
				printf("Not allowed\n");
			}
			else
			{
				printf("%d\n", a-c);
			}
		}
		else
		{
			if(a+c<-200)
			{
				printf("Not allowed\n");
			}
			else
			{
				printf("%d\n", a+c);
			}
		}
	}
}