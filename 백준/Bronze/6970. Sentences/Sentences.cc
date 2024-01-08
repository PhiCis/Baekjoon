#include<bits/stdc++.h>
using namespace std;

string s[30], t[30], u[30];
int n, m, k;

int main()
{
	int z;
	cin>>z;
	while(z--)
	{
		cin>>n>>m>>k;
		getline(cin, s[1]);
		for(int i=1;i<=n;i++) getline(cin, s[i]);
		for(int i=1;i<=m;i++) getline(cin, t[i]);
		for(int i=1;i<=k;i++) getline(cin, u[i]);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				for(int l=1;l<=k;l++)
				{
					cout<<s[i]<<" "<<t[j]<<" "<<u[l]<<".\n";
				}
			}
		}
		cout<<"\n";
	}
}