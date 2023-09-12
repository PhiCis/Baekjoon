#include<bits/stdc++.h>
using namespace std;

int n, k;
char c;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>k;
		cout<<"Case #"<<i<<": ";
		for(int j=1;j<=k;j++)
		{
			int tmp=0;
			for(int l=7;l>=0;l--)
			{
				cin>>c;
				if(c=='I') tmp+=(1<<l);
			}
			cout<<(char)tmp;
		}
		cout<<"\n";
	}
}