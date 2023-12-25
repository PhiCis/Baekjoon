#include<bits/stdc++.h>
using namespace std;

int n, a[100], tmp, ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>a[i-1]) tmp++;
		else
		{
			ans=max(ans, tmp);
			tmp=1;
		}
	}
	cout<<max(ans, tmp);
}