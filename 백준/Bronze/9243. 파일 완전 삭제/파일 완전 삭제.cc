#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string a, b;
	scanf("%d", &n);
	if(n&1)
	{
		cin>>a>>b;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]==b[i])
			{
				printf("Deletion failed");
				return 0;
			}
		}
		printf("Deletion succeeded");
	}
	else
	{
		cin>>a>>b;
		if(a==b)
		{
			printf("Deletion succeeded");
		}
		else
		{
			printf("Deletion failed");
		}
	}
}