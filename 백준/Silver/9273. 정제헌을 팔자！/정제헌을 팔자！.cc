#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, c;
	char b;
	while(cin>>a>>b>>c)
	{
		int ans=0;
		for(int i=c+1;i<=2*c;i++)
		{
			if((i*c)%(i-c)==0) ans++;
		}
		printf("%d\n", ans);
	}
}