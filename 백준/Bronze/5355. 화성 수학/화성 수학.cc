#include<bits/stdc++.h>
using namespace std;

int n;
double ans;
char a[10];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf", &ans);
		fgets(a, 10, stdin);
		for(int j=0;j<strlen(a);j++)
		{
			if(a[j]=='@') ans *= 3;
			if(a[j]=='%') ans += 5;
			if(a[j]=='#') ans -= 7;
		}
		printf("%.2lf\n", ans);
	}
}