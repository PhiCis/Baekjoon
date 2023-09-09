#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0;
	while(1)
	{
		cnt++;
		int n;
		scanf("%d", &n);
		if(n==0) return 0;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		printf("SET %d\n", cnt);
		for(int i=0;i<n;i+=2)
		{
			cout<<s[i]<<"\n";
		}
		
		for(int i=(n&1?n-2:n-1);i>=0;i-=2)
		{
			cout<<s[i]<<"\n";
		}
	}
}