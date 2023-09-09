#include<bits/stdc++.h>
using namespace std;

int n, a[30], ans[30];
int main()
{
	while(1)
	{
		cin>>n;
		if(!n) return 0;
		int tmp=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=a[n];i++) ans[i]=0;
		for(int i=1;i<=n;i++)
		{
			tmp++;
			for(int j=a[i-1]+1;j<=a[i];j++) ans[j]=tmp;
		}
		for(int i=1;i<=a[n];i++) cout<<ans[i]<<" ";
		cout<<"\n";
	}
}