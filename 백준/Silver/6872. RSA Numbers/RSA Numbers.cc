#include<bits/stdc++.h>
using namespace std;

int a, b, ANS;

int main()
{
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		int ans=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0) ans++;
		}
		if(ans==4) ANS++;
	}
	cout<<"The number of RSA numbers between "<<a<<" and "<<b<<" is "<<ANS;
}