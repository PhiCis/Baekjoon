#include<bits/stdc++.h>
using namespace std;

int a, b, c;
int main()
{
	while(cin>>a>>b)
	{
		if(a==0) return 0;
		for(int i=1;i<=a-2;i++)
		{
			cin>>c;
			b+=c;
		}
		cout<<(a+1)*a/2-b<<"\n";
	}
}