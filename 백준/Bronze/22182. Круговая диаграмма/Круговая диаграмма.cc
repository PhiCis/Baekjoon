#include<bits/stdc++.h>
using namespace std;

int n, m, a[110], s;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		printf("%.10lf\n", 3.1415926535897932*m*m*a[i]/s);
	}
}