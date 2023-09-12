#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, a;
	cin>>n;
	while(n--)
	{
		int A=0, B=0;
		cin>>m;
		for(int i=1;i<=m;i++)
		{
			cin>>a;
			A+=a;
		}
		if(A==0) printf("Equilibrium\n");
		if(A<0) printf("Left\n");
		if(A>0) printf("Right\n");
	}
}