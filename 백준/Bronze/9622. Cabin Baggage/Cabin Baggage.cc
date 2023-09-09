#include<bits/stdc++.h>
using namespace std;

int t;
double l, w, d, k;
int ans;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>l>>w>>d>>k;
		if(((l<=56&&w<=45&&d<=25)||(l+w+d)<=125) && k<=7)
		{
			printf("1\n");
			ans++;
		}
		else printf("0\n");
	}
	printf("%d", ans);
}