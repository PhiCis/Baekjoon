#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, tmp=1, ans=0;
	cin>>n;
	while(n)
	{
		if(n%10>=5) ans+=tmp*(n%10-1);
		else ans+=tmp*(n%10);
		n/=10;
		tmp*=9;
	}
	cout<<ans;
}