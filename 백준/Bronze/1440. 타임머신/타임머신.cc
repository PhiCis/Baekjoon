#include<bits/stdc++.h>
using namespace std;

int a, b, c, ans;

int main()
{
	scanf("%d:%d:%d", &a, &b, &c);
	if(1<=a&&a<=12&&0<=b&&b<=59&&0<=c&&c<=59) ans++;
	if(1<=a&&a<=12&&0<=c&&c<=59&&0<=b&&b<=59) ans++;
	if(1<=b&&b<=12&&0<=a&&a<=59&&0<=c&&c<=59) ans++;
	if(1<=b&&b<=12&&0<=c&&c<=59&&0<=a&&a<=59) ans++;
	if(1<=c&&c<=12&&0<=a&&a<=59&&0<=b&&b<=59) ans++;
	if(1<=c&&c<=12&&0<=b&&b<=59&&0<=a&&a<=59) ans++;
	printf("%d", ans);
}