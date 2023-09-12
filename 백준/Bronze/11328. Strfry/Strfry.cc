#include<stdio.h>
#include<string.h>
int n;
int main()
{
	scanf("%d", &n);
	while(n--)
	{
		char a[1010]={0}, b[1010]={0};
		int A[30]={0}, B[30]={0};
		scanf("%s", a);
		for(int i=0;i<strlen(a);i++)
		{
			A[a[i]-'a']++;
		}
		scanf(" %s", b);
		for(int i=0;i<strlen(b);i++)
		{
			B[b[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			if(A[i]!=B[i])
			{
				printf("Impossible\n");
				goto skip;
			}
		}
		printf("Possible\n");
		skip:;
	}
}