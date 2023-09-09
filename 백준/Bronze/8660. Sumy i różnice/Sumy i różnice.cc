#include<bits/stdc++.h>
using namespace std;

int n;
int cnt;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		if(a<0) cnt++;
	}
	cout<<(long long)cnt*(n-1);
}