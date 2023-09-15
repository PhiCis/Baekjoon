#include<bits/stdc++.h>
using namespace std;

int a, b, c, d;
int main()
{
	while(cin>>a>>b>>c>>d)
	{
		if(a==-1&&b==-1&&c==-1&&d==-1) return 0;
		if(a==-1)
		{
			for(a=1;a<=10000;a++)
			{
				if(b-a==c-b&&c-b==d-c)
				{
					cout<<a<<"\n";
					goto skip;
				}
				if(b*b==a*c&&c*c==b*d)
				{
					cout<<a<<"\n";
					goto skip;
				}
			}
			cout<<"-1\n";
		}
		if(b==-1)
		{
			for(b=1;b<=10000;b++)
			{
				if(b-a==c-b&&c-b==d-c)
				{
					cout<<b<<"\n";
					goto skip;
				}
				if(b*b==a*c&&c*c==b*d)
				{
					cout<<b<<"\n";
					goto skip;
				}
			}
			cout<<"-1\n";
		}
		if(c==-1)
		{
			for(c=1;c<=10000;c++)
			{
				if(b-a==c-b&&c-b==d-c)
				{
					cout<<c<<"\n";
					goto skip;
				}
				if(b*b==a*c&&c*c==b*d)
				{
					cout<<c<<"\n";
					goto skip;
				}
			}
			cout<<"-1\n";
		}
		if(d==-1)
		{
			for(d=1;d<=10000;d++)
			{
				if(b-a==c-b&&c-b==d-c)
				{
					cout<<d<<"\n";
					goto skip;
				}
				if(b*b==a*c&&c*c==b*d)
				{
					cout<<d<<"\n";
					goto skip;
				}
			}
			cout<<"-1\n";
		}
		skip:;
	}
}