#include<bits/stdc++.h>
using namespace std;

int main()
{
	string k;
	int l;
	cin>>k>>l;
	for(int i=2;i<l;i++)
	{
		int tmp=0;
		for(int j=0;j<k.size();j++)
		{
			tmp*=10;
			tmp+=k[j]-'0';
			tmp%=i;
		}
		if(tmp==0)
		{
			printf("BAD %d", i);
			return 0;
		}
	}
	printf("GOOD");
}