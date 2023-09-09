#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string a, b;
		cin>>a>>b;
		if(a=="0"&&b=="0") return 0;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		int sz = b.size()-a.size();
		for(int i=0;i<sz;i++)
		{
			a+="0";
		}
		sz = a.size()-b.size();
		for(int i=0;i<sz;i++)
		{
			b+="0";
		}
		a+="0";
		b+="0";
		int carry = 0;
		int ans = 0;
		for(int i=0;i<a.size();i++)
		{
			if((a[i]-'0')+(b[i]-'0')+carry>=10)
			{
				ans++;
				carry = 1;
			}
			else
			{
				carry = 0;
			}
		}
		printf("%d\n", ans);
	}
}