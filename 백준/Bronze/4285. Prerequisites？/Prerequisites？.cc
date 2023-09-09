#include<bits/stdc++.h>
using namespace std;

int n, k, a[110], m, q, b;
bool flag;

int main()
{
	while(1)
	{
		flag=true;
		cin>>n;
		if(!n) return 0;
		cin>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<k;i++)
		{
			cin>>m>>q;
			int cnt=0;
			for(int j=0;j<m;j++)
			{
				cin>>b;
				for(int l=0;l<n;l++)
				{
					if(a[l]==b)
					{
						cnt++;
						break;
					}
				}
			}
			if(cnt<q) flag=false; 
		}
		if(flag) cout<<"yes\n";
		else cout<<"no\n";
	}
}