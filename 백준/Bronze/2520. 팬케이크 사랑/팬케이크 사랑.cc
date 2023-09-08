#include<bits/stdc++.h>
using namespace std;

int a[10];
int t;

int main()
{
	cin>>t;
	while(t--)
	{
		for(int i=1;i<=9;i++)
		{
			cin>>a[i];
		}
		int ans1 = int(min({2.0*a[1], 2.0*a[2], 4.0*a[3], 16.0*a[4], 16.0/9.0*a[5]}));
		int ans2 = a[6]+a[7]/30+a[8]/25+a[9]/10;
		cout<<min(ans1, ans2)<<"\n";
	}
}