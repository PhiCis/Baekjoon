#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d\n", &n);
	while(n--)
	{
		char a[110]={0};
		fgets(a, 110, stdin);
		int len = strlen(a)-1;
		int cnt=0;
		for(int i=0;i<len;i++)
		{
			if(a[i]==' ')
			{
				cnt++;
				if(cnt==2)
				{
					for(int j=i+1;j<len;j++)
					{
						printf("%c", a[j]);
					}
					printf(" ");
					for(int j=0;j<i;j++)
					{
						printf("%c", a[j]);
					}
					printf("\n");
					goto skip;
				}
			}
		}
		skip:;
	}
}