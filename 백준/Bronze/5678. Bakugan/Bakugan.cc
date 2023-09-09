#include<bits/stdc++.h>
using namespace std;

int n, a[100], b[100];

int main()
{
	while(1)
	{
		cin>>n;
		int A=0, B=0, flag=0;
		if(n==0) return 0;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>b[i];
		for(int i=1;i<=n;i++)
		{
			A+=a[i];
			B+=b[i];
			if((!flag)&&i>=3)
			{
				if(a[i-2]==a[i-1]&&a[i-1]==a[i])
				{
					A+=30;
					flag=1;
				}
				if(b[i-2]==b[i-1]&&b[i-1]==b[i])
				{
					B+=30;
					flag=1;
				}
			}
		}
		if(A>B) cout<<"M\n";
		else if(A==B) cout<<"T\n";
		else cout<<"L\n";
	}
}