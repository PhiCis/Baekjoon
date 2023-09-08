#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	cin>>a>>b;
	int sza = a.size(), szb = b.size();
	int suma=0, sumb=0;
	for(int i=0;i<sza;i++)
	{
		suma+=a[i]-'0';
	}
	for(int i=0;i<szb;i++)
	{
		sumb+=b[i]-'0';
	}
	printf("%lld", (long long)suma*sumb);
	
}