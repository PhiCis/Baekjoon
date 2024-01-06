#include<bits/stdc++.h>
using namespace std;

int d[4][2]={0, 1, 1, 0, 0, -1, -1, 0};
int cnt;
int tmp=2;
int ttmp=0;
int n;
int main()
{
	cin>>n;
	int x=0, y=0;
	for(int i=1;i<=n;i++)
	{
		x+=d[cnt%4][0];
		y+=d[cnt%4][1];
		ttmp++;
		if(tmp/2==ttmp)
		{
			ttmp=0;
			tmp++;
			cnt++;
		}
	}
	cout<<x<<" "<<y;
}