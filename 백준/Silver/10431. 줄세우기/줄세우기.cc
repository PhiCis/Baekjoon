#include<bits/stdc++.h>
using namespace std;

int t, n, a[30];

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<n<<" ";
		int ans=0;
		for(int i=1;i<=20;i++)
		{
			cin>>a[i];
			for(int j=1;j<i;j++)
			{
				if(a[j]>a[i])
				{
					int tmp=a[i];
					for(int k=i;k>j;k--)
					{
						a[k]=a[k-1];
						ans++;
					}
					a[j]=tmp;
					break;
				}
			}
		}
		cout<<ans<<"\n";
	}
}