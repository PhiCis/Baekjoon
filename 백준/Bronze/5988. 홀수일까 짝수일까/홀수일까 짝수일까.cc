#include<stdio.h>
#include<string.h>
int N, i;
char a[110][110];
int main()
{
	scanf("%d", &N);
	for(i=0;i<N;i++)
	{
		scanf("%s", a[i]);
		if(a[i][strlen(a[i])-1]&1) printf("odd\n");
		else printf("even\n");
	}
}