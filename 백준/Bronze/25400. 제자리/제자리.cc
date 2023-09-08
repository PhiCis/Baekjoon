#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int cnt=1;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		if(a==cnt) cnt++;
	}
	cnt--;
	cout<<n-cnt;
}