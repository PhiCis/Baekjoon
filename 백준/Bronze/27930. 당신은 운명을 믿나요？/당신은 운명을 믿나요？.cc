#include<bits/stdc++.h>
using namespace std;

string s;
string a="KOREA", b="YONSEI";
int A=2e9, B=2e9;

int main()
{
	cin>>s;
	int cnt=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==a[cnt])
		{
			cnt++;
			if(cnt>=5)
			{
				A=i;
				break;
			}
		}
	}
	cnt=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==b[cnt])
		{
			cnt++;
			if(cnt>=6)
			{
				B=i;
				break;
			}
		}
	}
	if(A<B) cout<<"KOREA";
	else cout<<"YONSEI";
}