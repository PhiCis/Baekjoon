#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin>>a>>b;
	for(int i=1;i<=100000;i++)
	{
		if(a*i%b==1)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<"No such integer exists.";
}