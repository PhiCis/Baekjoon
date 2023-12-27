#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f;
int main()
{
	cin>>a>>b>>c>>d>>e>>f;
	for(int i=0;i<=1000000;i++)
	{
		if(i%c==0) d-=b;
		if(i%f==0) a-=e;
		if(a<=0 && d<=0)
		{
			cout<<"draw";
			return 0;
		}
		else if(a<=0)
		{
			cout<<"player two";
			return 0;
		}
		else if(d<=0)
		{
			cout<<"player one";
			return 0;
		}
	}
}