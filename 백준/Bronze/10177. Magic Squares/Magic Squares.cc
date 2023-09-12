#include<bits/stdc++.h>
using namespace std;
int t, n, a[10][10];
int ttmp;

main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		int tmp=0;
		for(int i=1;i<=n;i++) tmp+=a[1][i];
		for(int i=1;i<=n;i++)
		{
			ttmp=0;
			for(int j=1;j<=n;j++) ttmp+=a[i][j];
			if(ttmp!=tmp)
			{
				cout<<"Not a magic square\n";
				goto skip;
			}
		}
		for(int i=1;i<=n;i++)
		{
			ttmp=0;
			for(int j=1;j<=n;j++) ttmp+=a[j][i];
			if(ttmp!=tmp)
			{
				cout<<"Not a magic square\n";
				goto skip;
			}
		}
		ttmp=0;
		for(int i=1;i<=n;i++) ttmp+=a[i][i];
		if(ttmp!=tmp)
		{
			cout<<"Not a magic square\n";
			goto skip;
		}
		ttmp=0;
		for(int i=1;i<=n;i++) ttmp+=a[i][n+1-i];
		if(ttmp!=tmp)
		{
			cout<<"Not a magic square\n";
			goto skip;
		}
		cout<<"Magic square of size "<<n<<"\n";
		skip:;
	}
}