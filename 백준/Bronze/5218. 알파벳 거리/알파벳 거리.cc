#include<bits/stdc++.h>
using namespace std;
int n;
string a, b;
int main()
{
	scanf("%d", &n);
	while(n--)
	{
		cin>>a>>b;
		printf("Distances:");
		for(int i=0;i<a.size();i++)
		{
			printf(" %d", (b[i]-a[i]+26)%26);
		}
		printf("\n");
	}
}