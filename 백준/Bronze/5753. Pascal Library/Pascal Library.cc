#include<bits/stdc++.h>
using namespace std;

int a[510][510];

int main()
{
	while(1)
	{
		int n, m;
		cin>>m>>n;
		if(n==0) return 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int j=1;j<=m;j++)
		{
			bool flag = true;
			for(int i=1;i<=n;i++)
			{
				if(!a[i][j]) flag = false;
			}
//			cout<<flag;
			if(flag)
			{
				cout<<"yes\n";
				goto skip;
			}
		}
		cout<<"no\n";
		skip:;
	}
}