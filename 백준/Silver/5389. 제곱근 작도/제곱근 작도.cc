#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin>>n;
	while(n--)
	{
		cin>>k;
		for(int i=(int)(sqrt(k));i>=1;i--)
		{
			if(k%i==0&&(i+k/i)%2==0)
			{
				cout<<(k/i-i)/2<<" "<<(i+k/i)/2<<"\n";
				goto skip;
			}
		}
		cout<<"IMPOSSIBLE\n";
		skip:;
	}
}