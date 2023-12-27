#include<bits/stdc++.h>
using namespace std;
int A[10010][200];
int main()
{
	while(1){
		int a, b, c;
		int ans=0;
		scanf("%d,%d,%d", &a, &b, &c);
		if(a==-1) return 0;
		printf("%d,%d,%d: ", a, b, c);
		for(int i=1;i<=a;i++)
		{
			if(i<=b) A[0][i]=1;
			else A[0][i]=0;
		}
		for(int i=1;i<=c;i++)
		{
			A[i][1]=A[i-1][1]^A[i-1][a];
			for(int j=2;j<=a;j++)
			{
				A[i][j]=A[i-1][j]^A[i-1][j-1];
			}
		}
		for(int i=1;i<=a;i++)
		{
			if(A[c][i]) ans++;
		}
		cout<<ans<<"\n";
	}
}