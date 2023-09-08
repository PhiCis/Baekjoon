#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	string c;
	cin>>a>>b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	a.resize(90);
	b.resize(90);
	c.resize(91, '0');
	for(int i=0;i<90;i++)
	{
		if(c[i]=='1')
		{
			if(a[i]=='1'&&b[i]=='1')
			{
				c[i+1]='1';
			}
			else if(a[i]=='1'||b[i]=='1')
			{
				c[i]='0';
				c[i+1]='1';
			}
		}
		else if(a[i]=='1'&&b[i]=='1')
		{
			c[i+1]='1';
		}
		else if(a[i]=='1'||b[i]=='1')
		{
			c[i]='1';
		}
	}
	int pnt = 90;
	while(pnt>=0 && c[pnt]=='0') pnt--;
	if(pnt<0) printf("0");
	else
	{
		for(int i=pnt;i>=0;i--)
		{
			printf("%c", c[i]);
		}
	}
}