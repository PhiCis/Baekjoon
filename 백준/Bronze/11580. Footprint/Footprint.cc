#include<bits/stdc++.h>
using namespace std;

int x=1000, y=1000;
bool a[2020][2020];
int ans;

int main()
{
	int n;
	cin>>n;
	a[x][y]=true;
	while(n--)
	{
		char c;
		cin>>c;
		if(c=='N') y++;
		if(c=='E') x++;
		if(c=='W') x--;
		if(c=='S') y--;
		a[x][y]=true;
	}
	for(int i=0;i<=2000;i++) for(int j=0;j<=2000;j++) if(a[i][j]) ans++;
	cout<<ans;
}