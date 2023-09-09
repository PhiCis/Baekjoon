#include<bits/stdc++.h>
using namespace std;

int n, e;
int a, A, b, B;

int main()
{
	scanf("%d%d", &n, &e);
	for(int i=1;i<n;i++)
	{
		cin>>a;
		A+=a;
	}
	for(int j=1;j<e;j++)
	{
		cin>>b;
		B+=b;
	}
	cout<<(int)(sqrt(A*A+B*B)+0.9999999);
}