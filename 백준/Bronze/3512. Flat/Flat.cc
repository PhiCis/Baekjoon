#include<bits/stdc++.h>
using namespace std;

int ans1, ans2;
double ans3;

int main()
{
	int n, c;
	scanf("%d%d", &n, &c);
	for(int i=1;i<=n;i++)
	{
		int a;
		string s;
		scanf("%d", &a);
		cin>>s;
		ans1+=a;
		if(s=="bedroom") ans2+=a;
		if(s=="balcony") ans3+=0.5*a;
		else ans3+=a;
	}
	printf("%d\n%d\n%lf", ans1, ans2, ans3*c);
}