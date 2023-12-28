#include<bits/stdc++.h>
using namespace std;

int n;
char a[10][10];
int main()
{
	cin>>n;
	while(n--)
	{
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=5;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=5;j++)
			{
				for(int k=1;k<=5;k++)
				{
					for(int l=1;l<=5;l++)
					{
						if(a[i][j]=='k'&&a[k][l]=='k'&&(i-k)*(i-k)+(j-l)*(j-l)==5)
						{
							cout<<"invalid\n";
							goto skip;
						}
					}
				}
			}
		}
		cout<<"valid\n";
		skip:;
	}
}