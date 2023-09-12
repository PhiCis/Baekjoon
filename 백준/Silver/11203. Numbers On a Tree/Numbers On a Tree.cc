#include<bits/stdc++.h>
using namespace std;

long long n;
long long tmp = 1;
int h;
string s;

int main()
{
	cin>>h;
	n=(1ll<<(h+1))-1;
	if(cin>>s)
		for(int i=0;i<s.size();i++)
		{
			n-=tmp;
			if(s[i]=='R') n--;
			tmp*=2;
			if(s[i]=='R') tmp++;
		}
	cout<<n;
}