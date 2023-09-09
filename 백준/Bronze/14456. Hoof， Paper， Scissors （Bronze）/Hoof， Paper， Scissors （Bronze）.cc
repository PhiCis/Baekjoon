#include<bits/stdc++.h>
using namespace std;

int n, a[110], b[110];
int ans;
int d[3]={0, 1, 2};

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	do{
		int cnt=0;
		for(int i=1;i<=n;i++) if((d[a[i]]-d[b[i]]+3)%3==1) cnt++;
		ans=max(ans, cnt);
	}while(next_permutation(d, d+3));
	cout<<ans;
}