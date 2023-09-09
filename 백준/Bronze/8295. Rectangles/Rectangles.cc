#include<bits/stdc++.h>
using namespace std;

int a, b, c, ans;

int main()
{
	cin>>a>>b>>c;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			if(2*(i+j)>=c)
			{
				ans+=(a+1-i)*(b+1-j);
			}
		}
	}
	cout<<ans;
}