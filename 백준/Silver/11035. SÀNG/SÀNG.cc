#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	while(cin>>n>>k)
	{
		vector<bool> c(n+1);
		int cnt=0;
		for(int i=2;i<=n;i++)
		{
			if(c[i]) continue;
			for(int j=i;j<=n;j+=i)
			{
				if(!c[j])
				{
					c[j]=1;
					cnt++;
					if(cnt==k)
					{
						cout<<j<<"\n";
						goto skip;
					}
				}
			}
		}
		skip:;
	}
}