#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	int ans=0;
	cin>>n>>m;
	if(n<m) swap(n, m);
	while(n%m)
	{
//		cout<<n<<m<<"\n";
		ans+=n/m;
		n%=m;
		swap(n, m);
	}
	ans+=n/m;
	cout<<ans;
}