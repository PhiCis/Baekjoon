#include<stdio.h>
#include<iostream>
using namespace std;
int x, y;
int a[15]={0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 0, 0};
char b[10][10]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
int main()
{
	scanf("%d%d", &x, &y);
	int tmp=a[x]+y;
	cout<<b[tmp%7];
}