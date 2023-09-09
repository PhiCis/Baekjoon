#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	printf("%d", min(2*n-2, 2*m-1));
}