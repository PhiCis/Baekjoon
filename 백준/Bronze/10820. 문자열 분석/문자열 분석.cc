#include<bits/stdc++.h>
using namespace std;
char A[110];
int main()
{
	while(fgets(A, 110, stdin))
	{
		int a=0, b=0, c=0, d=0;
		for(int i=0;i<strlen(A);i++)
		{
			if(A[i]>='a') a++;
			else if(A[i]>='A') b++;
			else if(A[i]>='0') c++;
			else d++;
		}
		printf("%d %d %d %d\n", a, b, c, d-1);
		for(int i=0;i<110;i++)
		{
			A[i]=0;
		}
	}
}