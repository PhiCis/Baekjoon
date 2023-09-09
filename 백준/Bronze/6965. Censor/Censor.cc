#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d\n", &n);
	while(n--)
	{
		string a;
		getline(cin, a);
		int s=0, e=0;
		while(e<=a.size()-1)
		{
			if(a[e]==' ')
			{
				if(e-s==4)
				{
					printf("****");
				}
				else
					for(int i=s;i<=e-1;i++)
					{
						printf("%c", a[i]);
					}
				printf(" ");
				s=e+1;
			}
			e++;
		}
		if(e-s==4)
		{
			printf("****");
		}
		else
			for(int i=s;i<=e-1;i++)
			{
				printf("%c", a[i]);
			}
		printf(" \n\n");
	}
}