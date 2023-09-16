#include<bits/stdc++.h>
using namespace std;

int a[13];

int main()
{
	while(1)
	{
		for(int i=1;i<=12;i++)
		{
			cin>>a[i];
		}
		if(a[1]==0) return 0;
		sort(a+1, a+13);
		if(a[1]==a[4]&&a[5]==a[8]&&a[9]==a[12]) cout<<"yes";
		else cout<<"no";
		cout<<"\n";
	}
}