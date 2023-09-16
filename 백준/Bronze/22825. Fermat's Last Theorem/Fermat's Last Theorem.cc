#include<bits/stdc++.h>
using namespace std;

int n;
int main()
{
	while(cin>>n){
		if(!n) return 0;
		int ans=2e9;
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j++)
			{
				int tmp=n*n*n-i*i*i-j*j*j;
				if(tmp>=0) ans=min(ans, tmp);
			}
		}
		cout<<ans<<"\n";
	}
}