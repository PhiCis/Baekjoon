#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	cin>>a>>b;
	int n = a.size(), m = b.size();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				for(int k=0;k<m;k++)
				{
					for(int l=0;l<n;l++)
					{
						if(l==i)
						{
							printf("%c", b[k]);
						}
						else if(k==j)
						{
							printf("%c", a[l]);
						}
						else
						{
							printf(".");
						}
					}
					printf("\n");
				}
				return 0;
			}
		}
	}
}