#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int A = 0, B = 0;
		for(int i=0;i<n;i++)
		{
			string a, b;
			cin>>a>>b;
			if(a=="R")
			{
				if(b=="S")
				{
					A++;
				}
				if(b=="P")
				{
					B++;
				}
			}
			if(a=="S")
			{
				if(b=="P")
				{
					A++;
				}
				if(b=="R")
				{
					B++;
				}
			}
			if(a=="P")
			{
				if(b=="R")
				{
					A++;
				}
				if(b=="S")
				{
					B++;
				}
			}
		}
		if(A!=B)
		{
			printf("Player %d\n", A>B?1:2);
		}
		else printf("TIE\n");
	}
}