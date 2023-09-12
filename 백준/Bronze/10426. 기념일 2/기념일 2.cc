#include<bits/stdc++.h>
using namespace std;

int d[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
	int a, b, c, n;
	scanf("%d-%d-%d%d", &a, &b, &c, &n);
	n--;
	while(n--)
	{
		c++;
		if(b==2)
		{
			if(c==30)
			{
				b=3;
				c=1;
			}
			else if(c==29)
			{
				if(a%4==0&&(a%100!=0 || a%400==0))
				{
					
				}
				else
				{
					b=3;
					c=1;
				}
			}
		}
		else
		{
			if(d[b]<c)
			{
				c=1;
				b++;
				if(b==13)
				{
					b=1;
					a++;
				}
			}
		}
	}
	printf("%d-%02d-%02d", a, b, c);
}