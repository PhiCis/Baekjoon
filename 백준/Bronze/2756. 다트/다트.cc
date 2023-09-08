#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		double a, b;
		int ans[2]={0, 0};
		for(int i=0;i<=1;i++)
		{
			for(int j=1;j<=3;j++)
			{
				scanf("%lf%lf", &a, &b);
				if(a*a+b*b<=9) ans[i]+=100;
				else if(a*a+b*b<=36) ans[i]+=80;
				else if(a*a+b*b<=81) ans[i]+=60;
				else if(a*a+b*b<=144) ans[i]+=40;
				else if(a*a+b*b<=225) ans[i]+=20;
			}
		}
		printf("SCORE: %d to %d, ", ans[0], ans[1]);
		if(ans[0]<ans[1])
		{
			printf("PLAYER 2 WINS.\n");
		}
		else if(ans[0]>ans[1])
		{
			printf("PLAYER 1 WINS.\n");
		}
		else
		{
			printf("TIE.\n");
		}
	}
}