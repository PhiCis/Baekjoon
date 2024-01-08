#include<bits/stdc++.h>
using namespace std;

int n;
int main()
{
	cin>>n;
	for(int i=0;i<720;i++)
	{
		if((i%60*60-i*5+3600)%3600==n)
		{
			printf("%02d:%02d", i/60, i%60);
		}
	}
}