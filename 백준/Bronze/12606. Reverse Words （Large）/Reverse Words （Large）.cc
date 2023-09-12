#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d\n", &n);
	for(int i=1;i<=n;i++)
	{
		string a;
		getline(cin, a);
		printf("Case #%d: ", i);
		int s=a.size()-1, e=a.size()-1;
		while(s>0)
		{
			if(a[s]==' ')
			{
				for(int j=s+1;j<=e;j++)
				{
					printf("%c", a[j]);
				}
				printf(" ");
				e=s-1;
			}
			s--;
		}
		for(int j=s;j<=e;j++)
		{
			printf("%c", a[j]);
		}
		printf("\n");
	}
}