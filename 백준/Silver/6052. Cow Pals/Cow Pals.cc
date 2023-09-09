#include<bits/stdc++.h>
using namespace std;

int ans[8][2]={
	220, 284, 
	1184, 1210, 
	2620, 2924, 
	5020, 5564, 
	6232, 6368, 
	10744, 10856, 
	12285, 14595, 
	17296, 18416
};
int n;

int main()
{
	cin>>n;
	for(int i=0;i<8;i++)
	{
		if(ans[i][0]>=n)
		{
			cout<<ans[i][0]<<" "<<ans[i][1];
			return 0;
		}
		if(ans[i][1]>=n)
		{
			cout<<ans[i][1]<<" "<<ans[i][0];
			return 0;
		}
	}
}