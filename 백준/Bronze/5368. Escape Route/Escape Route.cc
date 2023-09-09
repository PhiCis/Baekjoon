#include<bits/stdc++.h>
using namespace std;

int t, n, I, J;
char a[1010][1010];
int ans, ansi, ansj;

int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		ans=2e9;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='s') I=i, J=j;
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]=='p')
				{
//					cout<<i<<j<<"\n";
					if((I-i)*(I-i)+(J-j)*(J-j)<ans)
					{
						ans=(I-i)*(I-i)+(J-j)*(J-j);
						ansi=i, ansj=j;
					}
				}
			}
		}
		printf("(%d,%d):(%d,%d):%.2lf\n", I-1, J-1, ansi-1, ansj-1, sqrt(ans));
	}
}