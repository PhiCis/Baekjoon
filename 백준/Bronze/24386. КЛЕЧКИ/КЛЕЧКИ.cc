#include<bits/stdc++.h>
using namespace std;
pair<int, int> a[4];
int b[4];
int c[1010];
int ans;
int main()
{
	for(int i=1;i<=3;i++)
	{
		cin>>a[i].first>>a[i].second;
		b[i]=a[i].second-a[i].first;
		for(int j=a[i].first;j<a[i].second;j++) c[j]=1;
	}
	for(int i=1;i<=200;i++)
	{
		if(c[i-1]==0&&c[i]==1) ans++;
	}
	cout<<ans<<"\n";
	sort(b+1, b+4);
	cout<<b[1]<<" "<<b[3];
}