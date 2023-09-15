#include<bits/stdc++.h>
using namespace std;

int n;
pair<int, int> a[110];
int cnt;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x, y;
		scanf("%d:%d", &x, &y);
		if(pair<int, int>{x, y}<pair<int, int>{6, 30}||pair<int, int>{x, y}>pair<int, int>{19, 0}) continue;
		a[++cnt]={x, y};
	}
	n=cnt;
	sort(a+1, a+n+1);
	if(a[1]>=pair<int, int>{6, 30}&&a[1]<=pair<int, int>{10, 0}&&a[n]>=pair<int, int>{6, 30}&&a[n]<=pair<int, int>{16, 0}) cout<<24000;
	else if(a[1]>=pair<int, int>{6, 30}&&a[1]<=pair<int, int>{10, 0}&&a[n]>=pair<int, int>{16, 1}&&a[n]<=pair<int, int>{19, 0}) cout<<36000;
	else if(a[1]>=pair<int, int>{10, 1}&&a[1]<=pair<int, int>{16, 0}&&a[n]>=pair<int, int>{10, 1}&&a[n]<=pair<int, int>{16, 0}) cout<<16800;
	else if(a[1]>=pair<int, int>{10, 1}&&a[1]<=pair<int, int>{19, 0}&&a[n]>=pair<int, int>{16, 1}&&a[n]<=pair<int, int>{19, 0}) cout<<24000;
	else cout<<0;
}