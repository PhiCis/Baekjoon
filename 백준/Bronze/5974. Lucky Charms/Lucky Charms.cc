#include<bits/stdc++.h>
using namespace std;

int l, c, n, s, p;
//int ans;

int main()
{
	cin>>l>>c>>n;
//	ans=max(l-n, n);
	for(int i=1;i<=c;i++)
	{
		cin>>s>>p;
		cout<<abs(p-n)+s<<"\n";
//		ans=max(ans, abs(p-n)+s);
	}
//	cout<<ans;
}