#include<bits/stdc++.h>
using namespace std;

pair<char, int> a[10];
pair<int, char> b[10];

int main()
{
	for(int i=1;i<=5;i++)
	{
		scanf(" %c%d", &a[i].first, &a[i].second);
		b[i].first=a[i].second;
		b[i].second=a[i].first;
	}
	sort(a+1, a+6);
	sort(b+1, b+6);
	if(a[1].first==a[5].first && a[1].second+4==a[5].second)
	{
		printf("%d", 900+a[5].second);
	}
	else if(b[1].first==b[4].first||b[2].first==b[5].first)
	{
		printf("%d", 800+b[2].first);
	}
	else if(b[1].first==b[3].first&&b[4].first==b[5].first)
	{
		printf("%d", 700+10*b[1].first+b[4].first);
	}
	else if(b[1].first==b[2].first&&b[3].first==b[5].first)
	{
		printf("%d", 700+10*b[3].first+b[1].first);
	}
	else if(a[1].first==a[5].first)
	{
		printf("%d", 600+a[5].second);
	}
	else if(b[1].first+1==b[2].first&&b[2].first+1==b[3].first&&b[3].first+1==b[4].first&&b[4].first+1==b[5].first)
	{
		printf("%d", 500+b[5].first);
	}
	else if(b[1].first==b[3].first||b[2].first==b[4].first||b[3].first==b[5].first)
	{
		printf("%d", 400+b[3].first);
	}
	else if(b[1].first==b[2].first&&b[3].first==b[4].first)
	{
		printf("%d", 300+b[2].first+10*b[4].first);
	}
	else if(b[1].first==b[2].first&&b[4].first==b[5].first)
	{
		printf("%d", 300+b[2].first+10*b[4].first);
	}
	else if(b[2].first==b[3].first&&b[4].first==b[5].first)
	{
		printf("%d", 300+b[2].first+10*b[4].first);
	}
	else if(b[1].first==b[2].first)
	{
		printf("%d", 200+b[1].first);
	}
	else if(b[2].first==b[3].first)
	{
		printf("%d", 200+b[2].first);
	}
	else if(b[3].first==b[4].first)
	{
		printf("%d", 200+b[3].first);
	}
	else if(b[4].first==b[5].first)
	{
		printf("%d", 200+b[4].first);
	}
	else
	{
		printf("%d", 100+b[5].first);
	}
}