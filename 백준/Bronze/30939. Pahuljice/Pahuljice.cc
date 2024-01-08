#include<bits/stdc++.h>
using namespace std;

int n, m;
int d[8][2]={-1, -1, -1, 0, -1, 1, 0, -1, 0, 1, 1, -1, 1, 0, 1, 1};
char c[8]={'\\', '|', '/', '-', '-', '/', '|', '\\'};
char a[110][110];
int ANS;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]=='+')
			{
				int ans=2e9;
				for(int k=0;k<8;k++)
				{
					int tmp=1;
					while(1<=i+tmp*d[k][0] && i+tmp*d[k][0]<=n && 1<=j+tmp*d[k][1] && j+tmp*d[k][1]<=m && a[i+tmp*d[k][0]][j+tmp*d[k][1]]==c[k])
					{
						tmp++;
					}
					ans=min(ans, tmp-1);
				}
				ANS=max(ANS, ans);
			}
		}
	}
	cout<<ANS;
}