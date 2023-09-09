#include<bits/stdc++.h>
using namespace std;

int main()
{
	string t;
	cin>>t;
	if(t=="0")
	{
		printf("1");
		return 0;
	}
	string s="0"+t;
	int tmp=(s[s.size()-2]-'0')*10+(s[s.size()-1]-'0');
	if(tmp%4==1) printf("2");
	if(tmp%4==2) printf("4");
	if(tmp%4==3) printf("8");
	if(tmp%4==0) printf("6");
}