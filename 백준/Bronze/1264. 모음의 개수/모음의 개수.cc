#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int ans = 0;
		string a;
		getline(cin, a);
		if(a[0]=='#') return 0;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u') ans++;
			if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U') ans++;
		}
		printf("%d\n", ans);
	}
}