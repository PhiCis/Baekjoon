#include<bits/stdc++.h>
using namespace std;

int n, a[1010], s;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		s+=a[i];
	}
	s/=2;
	for(int i=2;i<=n;i+=2)
	{
		s-=a[i];
	}
	printf("%d\n", s);
	for(int i=1;i<n;i++)
	{
		s=a[i]-s;
		printf("%d\n", s);
	}
	
}