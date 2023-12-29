#include<bits/stdc++.h>
using namespace std;

int n, m, k, x, y, a;

int main()
{
	cin>>n>>m>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>a;
		if(y+a<=m)
		{
			y+=a;
			if(y==m)
			{
				y=0;
				x++;
				if(x==n)
				{
					cout<<"YES";
					return 0;
				}
			}
		}
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"NO";
	
}