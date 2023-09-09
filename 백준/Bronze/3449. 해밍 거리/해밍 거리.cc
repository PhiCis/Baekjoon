#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		string a, b;
		cin>>a>>b;
		int ans = 0;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]!=b[i]) ans++;
		}
		printf("Hamming distance is %d.\n", ans);
	}
}