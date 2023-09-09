#include<bits/stdc++.h>
using namespace std;

int cnt;
int ans;
char c;

int main()
{
	while(cin>>c)
	{
		if(c=='#') break;
		if(c<='Z')
		{
			if(cnt%4==0) goto skip;
			int tmp=4-cnt%4;
			cnt+=tmp;
			ans+=tmp;
		}
		skip:;
		cnt++;
	}
	cout<<ans;
}