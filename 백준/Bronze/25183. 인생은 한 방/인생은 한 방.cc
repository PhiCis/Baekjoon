#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	cin>>n>>s;
	int cnt=1;
	for(int i=1;i<s.size();i++)
	{
		if(abs(s[i]-s[i-1])==1)
		{
			cnt++;
			if(cnt>=5)
			{
				cout<<"YES";
				return 0;
			}
		}
		else
		{
			cnt=1;
		}
	}
	cout<<"NO";
}