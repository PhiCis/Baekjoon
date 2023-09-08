#include<stdio.h>
#include<string.h>
#define MOD 1000000
using namespace std;
char A[5050];
int a[5050], dp[5050];
int main()
{
	scanf("%s", A);
	int len=strlen(A);
	for(int i=0;i<len;i++)
	{
		a[i+1]=A[i]-'0';
	}
	dp[0]=1;
	if(a[1]) dp[1]=1;
	for(int i=2;i<=len;i++)
	{
		if((a[i-1]==1||(a[i-1]==2&&a[i]<7))&&a[i]) dp[i]=(dp[i-1]+dp[i-2])%MOD; 
		else if(a[i]==0&&(a[i-1]==1||a[i-1]==2)) dp[i]=dp[i-2]; 
		else if(a[i]==0) dp[i]=0;
		else dp[i]=dp[i-1];
	}
	printf("%d", dp[len]%MOD);
	
}