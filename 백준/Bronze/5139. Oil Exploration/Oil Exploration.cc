#include<bits/stdc++.h>
using namespace std;

int t, n, m;
char a[110][110];

int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cout<<"Data Set "<<x<<":\n";
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int j=1;j<=m;j++)
		{
			int tmp=0;
			for(int i=1;i<=n;i++)
			{
				if(a[i][j]=='X')
				{
					cout<<tmp<<" ";
					goto skip;
				}
				else if(a[i][j]=='H') tmp+=3;
				else tmp++;
			}
			cout<<"N ";
			skip:;
		}
		cout<<"\n\n";
	}
}