#include<bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
	cin>>a>>b;
	for(int i=1;i<=b;i++)
	{
		int tmp=i;
		while(tmp)
		{
			cout<<(char)('a'+tmp%26);
			tmp/=26;
		}
		cout<<" ";
	}
}