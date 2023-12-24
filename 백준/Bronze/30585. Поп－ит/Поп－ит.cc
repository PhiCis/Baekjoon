#include<bits/stdc++.h>
using namespace std;

int a, b;
char c;
int ans;

int main()
{
	cin>>a>>b;
	for(int i=1;i<=a;i++) for(int j=1;j<=b;j++)
	{
		cin>>c;
		ans+=(int)(c-'0');
	}
	cout<<min(ans, a*b-ans);
}