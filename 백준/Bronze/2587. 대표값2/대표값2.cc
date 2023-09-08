#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=5, a[10]={0}, ans=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		ans+=a[i];
	}
	sort(a, a+5);
	printf("%d\n%d", ans/5, a[2]);
}