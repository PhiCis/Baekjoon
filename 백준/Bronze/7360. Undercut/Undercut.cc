#include<bits/stdc++.h>
using namespace std;

int n, a[101], b[101];

int main()
{
	while(1)
	{
		cin>>n;
		int A=0, B=0;
		if(!n) return 0;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>b[i];
		for(int i=1;i<=n;i++)
		{
			if(abs(a[i]-b[i])==1)
			{
				if(a[i]==1&&b[i]==2) A+=6;
				else if(a[i]==2&&b[i]==1) B+=6;
				else if(a[i]<b[i]) A+=a[i]+b[i];
				else B+=a[i]+b[i];
			}
			else if(a[i]!=b[i])
			{
				if(a[i]>b[i]) A+=a[i];
				else B+=b[i];
			}
		}
		cout<<"A has "<<A<<" points. B has "<<B<<" points.\n\n";
	}
}