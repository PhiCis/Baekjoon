#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

char a[10];
int A[10], ans;
int main()
{
	scanf("%s", a);
	for(int i=0;i<strlen(a);i++)
	{
		A[a[i]-'0']++;
	}
	for(int i=0;i<10;i++)
	{
		if(i==6||i==9)
		{
			ans=max(ans, (A[6]+A[9]+1)/2);
		}
		else ans=max(ans, A[i]);
	}
	printf("%d", ans);
}