#include<bits/stdc++.h>
using namespace std;

int t, a, b, c, s;
string ans[4]={"OKAY", "EASY", "HARD", "BOTH"};
int main()
{
	cin>>t;
	while(t--)
	{
		int tmp=0;
		cin>>a>>b>>c;
		for(int i=1;i<=a;i++)
		{
			cin>>s;
			if(i==1 && s==b) tmp++;
			if(i==a && s==c) tmp+=2;
		}
		cout<<ans[tmp]<<"\n";
	}
}