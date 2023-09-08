#include<bits/stdc++.h>
using namespace std;

int a[100010];

int main()
{
	int n;
	cin>>n;
	bool flag=false;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i>=2)
		{
			if(a[i]==a[i-1])
			{
				cout<<"NO";
				return 0;
			}
			if((!flag)&&a[i]<a[i-1])
			{
				flag=true;
			}
			if(flag && a[i]>a[i-1])
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
}