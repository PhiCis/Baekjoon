#include<bits/stdc++.h>
using namespace std;

int c[30], chk[30];
bool f()
{
	int ans=0;
	for(int i=0;i<5;i++)
	{
		if(chk[i*5+1]&chk[i*5+2]&chk[i*5+3]&chk[i*5+4]&chk[i*5+5]) ans++;
	}
	for(int i=1;i<=5;i++)
	{
		if(chk[i]&chk[i+5]&chk[i+10]&chk[i+15]&chk[i+20]) ans++;
	}
	if(chk[1]&chk[7]&chk[13]&chk[19]&chk[25]) ans++;
	if(chk[5]&chk[9]&chk[13]&chk[17]&chk[21]) ans++;
	return ans>=3;
}

int main()
{
	int a;
	for(int i=1;i<=25;i++)
	{
		scanf("%d", &a);
		c[a]=i;
	}
	for(int i=1;i<=25;i++)
	{
		scanf("%d", &a);
		chk[c[a]]=1;
		if(f())
		{
			printf("%d", i);
			return 0;
		}
	}
}