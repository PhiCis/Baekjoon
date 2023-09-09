#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n", &n);
	for(int i=1;i<=n;i++)
	{
		char a[1010]={0};
		fgets(a, 1010, stdin);
		int s=0, e=0;
		while(a[s]!='\n'&&a[s]!=0)
		{
			while(a[e]!='\n'&&a[e]!=' ') e++;
			for(int j=e-1;j>=s;j--)
			{
				printf("%c", a[j]);
			}
			printf("%c", a[e]);
			s=e+1;
			e++;
		}
	}
}