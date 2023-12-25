#include<bits/stdc++.h>
using namespace std;

int a[1010], b[1010], n, A, B;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i]>b[j]) A++;
			if(a[i]<b[j]) B++;
		}
	}
	if(A>B) cout<<"first";
	else if(A<B) cout<<"second";
	else cout<<"tie";
}