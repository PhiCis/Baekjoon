#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		string a, b, ans;
		cin>>a>>b;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		while(a.size()<=99)
		{
			a+='0';
		}
		while(b.size()<=99)
		{
			b+='0';
		}
		int c=0;
		for(int i=0;i<=99;i++)
		{
			ans+='0'+(((a[i]-'0')+(b[i]-'0')+c)&1);
			c=(((a[i]-'0')+(b[i]-'0')+c)>=2?1:0);
		}
		bool flag=false;
		for(int i=99;i>=0;i--)
		{
			if(ans[i]=='1')
			{
				flag=true;
			}
			if(flag==true)
			{
				printf("%c", ans[i]);
			}
		}
		if(flag==false)
		{
			printf("0");
		}
		printf("\n");
	}
}