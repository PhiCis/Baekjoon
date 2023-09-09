#include<bits/stdc++.h>
using namespace std;

int d[4][2]={10, 0, 0, 10, -10, 0, 0, -10};
string s;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	while(cin>>s)
	{
		if(s=="#") break;
		cout<<"300 420 moveto\n";
		int x=300, y=420, z=0;
		for(int i=0;i<s.size();i++)
		{
			x+=d[z][0], y+=d[z][1];
			cout<<x<<" "<<y<<" "<<"lineto\n";
			if(s[i]=='V') z=(z+1)%4;
			else z=(z+3)%4;
		}
		x+=d[z][0], y+=d[z][1];
		cout<<x<<" "<<y<<" "<<"lineto\n";
		cout<<"stroke\nshowpage\n";
	}
}