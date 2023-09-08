#include<bits/stdc++.h>
using namespace std;

int n, g, a[10];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=6;i++)
	{
		scanf("%d%d", &g, &a[i]);
	}
	if(max({a[1], a[2], a[3], a[4], a[5], a[6]})==a[1])
	{
		if(a[6]>a[2]) 	printf("%d", n*(a[6]*a[1]-a[3]*a[4]));
		if(a[6]<a[2])	printf("%d", n*(a[1]*a[2]-a[4]*a[5]));
	}
	else if(max({a[1], a[2], a[3], a[4], a[5], a[6]})==a[2])
	{
		if(a[1]>a[3]) 	printf("%d", n*(a[1]*a[2]-a[4]*a[5]));
		if(a[1]<a[3])	printf("%d", n*(a[2]*a[3]-a[5]*a[6]));
	}
	else if(max({a[1], a[2], a[3], a[4], a[5], a[6]})==a[3])
	{
		if(a[2]>a[4]) 	printf("%d", n*(a[2]*a[3]-a[5]*a[6]));
		if(a[2]<a[4])	printf("%d", n*(a[3]*a[4]-a[6]*a[1]));
	}
	else if(max({a[1], a[2], a[3], a[4], a[5], a[6]})==a[4])
	{
		if(a[3]>a[5]) 	printf("%d", n*(a[3]*a[4]-a[6]*a[1]));
		if(a[3]<a[5])	printf("%d", n*(a[4]*a[5]-a[1]*a[2]));
	}
	else if(max({a[1], a[2], a[3], a[4], a[5], a[6]})==a[5])
	{
		if(a[4]>a[6]) 	printf("%d", n*(a[4]*a[5]-a[1]*a[2]));
		if(a[4]<a[6])	printf("%d", n*(a[5]*a[6]-a[2]*a[3]));
	}
	else if(max({a[1], a[2], a[3], a[4], a[5], a[6]})==a[6])
	{
		if(a[5]>a[1]) 	printf("%d", n*(a[5]*a[6]-a[2]*a[3]));
		if(a[5]<a[1])	printf("%d", n*(a[6]*a[1]-a[3]*a[4]));
	}
}