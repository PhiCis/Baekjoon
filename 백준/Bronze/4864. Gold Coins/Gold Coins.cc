#include<bits/stdc++.h>
using namespace std;


int main()
{
	while(1)
	{
		int n, ans=0, cnt=0;
		cin>>n;
		if(!n) return 0;
		for(int i=1;;i++)
		{
			for(int j=1;j<=i;j++)
			{
				ans+=i;
				cnt++;
				if(cnt==n)
				{
					cout<<n<<" "<<ans<<"\n";
					goto skip;
				}
			}
		}
		skip:;
	}
}