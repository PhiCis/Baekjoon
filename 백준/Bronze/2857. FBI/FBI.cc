#include<bits/stdc++.h>
using namespace std;

int ans;

int main()
{
	for(int j=1;j<=5;j++)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.size()-2;i++)
		{
			if(s[i]=='F'&&s[i+1]=='B'&&s[i+2]=='I') 
			{
				printf("%d ", j);
				ans++;
				break;
			}
		}
	}
	if(ans==0)
	{
		printf("HE GOT AWAY!");
	}
}