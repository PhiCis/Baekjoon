#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		int k = (int)sqrt((int)s.size());
		for(int j=k-1;j>=0;j--)
		{
			for(int l=0;l<k;l++)
			{
				printf("%c", s[l*k+j]);
			}
		}
		printf("\n");
	}
}