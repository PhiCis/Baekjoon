#include<bits/stdc++.h>
using namespace std;
int a, b[110], c[110], s, n;
int main()
{
	cin>>a>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		s+=b[i];
	}
	a=min(a, s);
	int cnt=0;
	while(a)
	{
		if(b[cnt%n])
		{
			a--;
			b[cnt%n]--;
			c[cnt%n]++;
		}
		cnt++;
	}
	for(int i=0;i<n;i++) cout<<c[i]<<"\n";
}