#include<bits/stdc++.h>
using namespace std;

int cnt, a, b, c, d, ans;

int main()
{
	while(1)
	{
		cnt++;
		cin>>a>>b>>c>>d;
		for(int i=1;i<=21252;i++)
		{
			if((i+d-a+23)%23==0&&(i+d-b+28)%28==0&&(i+d-c+33)%33==0)
			{
				ans=i;
				break;
			}
		}
		if(a==-1) return 0;
		cout<<"Case "<<cnt<<": the next triple peak occurs in ";
		cout<<ans<<" days.\n";
	}
}