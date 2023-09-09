#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> a(3);
	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	sort(a.begin(), a.end());
	if(a[1]-a[0]==a[2]-a[1])
	{
		printf("%d", a[2]+(a[1]-a[0]));
	}
	else if(a[1]-a[0]==2*(a[2]-a[1]))
	{
		printf("%d", a[0]+(a[2]-a[1]));
	}
	else if(a[2]-a[1]==2*(a[1]-a[0]))
	{
		printf("%d", a[1]+(a[1]-a[0]));
	}
}