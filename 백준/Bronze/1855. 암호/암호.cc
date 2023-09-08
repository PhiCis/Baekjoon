#include<bits/stdc++.h>
using namespace std;

int k;
string s;
char a[30][30];
int pnt;

int main()
{
	cin>>k;
	cin>>s;
	
	for(int i=0;i<s.size()/k;i++)
	{
		if(i&1)
		{
			for(int j=k-1;j>=0;j--)
			{
				a[i][j]=s[pnt++];
			}
		}
		else
		{
			for(int j=0;j<k;j++)
			{
				a[i][j]=s[pnt++];
			}
		}
	}
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<s.size()/k;j++)
		{
			cout<<char(a[j][i]);
		}
	}
}