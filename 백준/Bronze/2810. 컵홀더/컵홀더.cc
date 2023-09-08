#include<bits/stdc++.h>
using namespace std;

int l, n;
string s;
int main()
{
	scanf("%d", &n);
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='L') l++;
	}
	printf("%d", n-max(0, (l-2)/2));
}