#include<bits/stdc++.h>
using namespace std;

int a, b, c, m[10];

int main()
{
	scanf("%1d%1d%1d", &a, &b, &c);
	m[a]++;
	m[b]++;
	m[c]++;
	for(int i=0;i<10;i++)
	{
		if(m[i]>=2)
		{
			cout<<"Locked";
			return 0;
		}
	}
	if(m[1]&&m[2]&&m[3]){cout<<"Unlocked"; return 0;}
	if(m[4]&&m[5]&&m[6]){cout<<"Unlocked"; return 0;}
	if(m[7]&&m[8]&&m[9]){cout<<"Unlocked"; return 0;}
	if(m[1]&&m[4]&&m[7]){cout<<"Unlocked"; return 0;}
	if(m[2]&&m[5]&&m[8]){cout<<"Unlocked"; return 0;}
	if(m[5]&&m[8]&&m[0]){cout<<"Unlocked"; return 0;}
	if(m[3]&&m[6]&&m[9]){cout<<"Unlocked"; return 0;}
	cout<<"Locked";
	
}