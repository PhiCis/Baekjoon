#include<bits/stdc++.h>
using namespace std;

int cnt, n, k, s;
int main()
{
	while(1)
	{
		cnt++;
		cin>>n;
		if(n==0) return 0;
		printf("User %d\n", cnt);
		cin>>k;
		for(int i=0;i<k;i++)
		{
			cin>>s;
			printf("%.5lf\n", 0.00001*s*n);
		}
	}
}