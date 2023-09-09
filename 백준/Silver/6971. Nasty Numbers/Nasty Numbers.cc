#include<bits/stdc++.h>
using namespace std;

int n, k;

int main()
{
	cin>>n;
	while(n--)
	{
		cin>>k;
		cout<<k<<" is ";
		map<int, int> m;
		for(int i=1;i*i<=k;i++)
		{
			if(k%i==0) m[i+k/i]++;
		}
		for(int i=1;i*i<=k;i++)
		{
			if(k%i==0&&m[k/i-i])
			{
				cout<<"nasty\n";
				goto skip;
			}
		}
		cout<<"not nasty\n";
		skip:;
	}
}