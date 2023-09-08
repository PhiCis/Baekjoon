#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		vector<int> a(8, 0);
		for(int i=2;i<40;i++)
		{
			if(s[i]=='T'&&s[i-1]=='T'&&s[i-2]=='T') a[0]++;
			if(s[i]=='H'&&s[i-1]=='T'&&s[i-2]=='T') a[1]++;
			if(s[i]=='T'&&s[i-1]=='H'&&s[i-2]=='T') a[2]++;
			if(s[i]=='H'&&s[i-1]=='H'&&s[i-2]=='T') a[3]++;
			if(s[i]=='T'&&s[i-1]=='T'&&s[i-2]=='H') a[4]++;
			if(s[i]=='H'&&s[i-1]=='T'&&s[i-2]=='H') a[5]++;
			if(s[i]=='T'&&s[i-1]=='H'&&s[i-2]=='H') a[6]++;
			if(s[i]=='H'&&s[i-1]=='H'&&s[i-2]=='H') a[7]++;
		}
		for(int i=0;i<8;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
}