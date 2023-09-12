#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
	scanf("%d\n", &n);
	for(int i=1;i<=n;i++)
	{
		char a[30]={0};
		fgets(a, 30, stdin);
		int len = strlen(a);
		printf("Case #%d: ", i);
		int end = len-2;
		for(int j=len-2;j>=0;j--)
		{
			while(a[j]!=' '&&j>=0) j--;
			for(int k=j+1;k<=end;k++)
			{
				printf("%c", a[k]);
			}
			printf(" ");
			end=j-1;
		}
		printf("\n");
	}
}