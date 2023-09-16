#include<bits/stdc++.h>
using namespace std;
int n, a[110], b[110], c[110], d[10];
int A, B;
int main()
{
	for(int i=1;i<=8;i++) d[i]=-2e9;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		if(a[i]-d[b[i]]<=10)
		{
			if(b[i]<=4) A+=150;
			else B+=150;
		}
		else
		{
			if(b[i]<=4) A+=100;
			else B+=100;
		}
		d[b[i]]=a[i];
	}
	cout<<A<<" "<<B;
}