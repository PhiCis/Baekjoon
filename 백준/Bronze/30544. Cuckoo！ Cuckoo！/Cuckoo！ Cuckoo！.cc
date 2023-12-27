#include<bits/stdc++.h>
using namespace std;
int a, b, c;
int ans;
int main()
{
	scanf("%d:%d%d", &a, &b, &c);
	a=a*100+b;
	while(1)
	{
		if(a%100==0) ans+=a/100;
		if(a%100==15||a%100==30||a%100==45) ans++;
		if(ans>=c)
		{
			printf("%02d:%02d", a/100, a%100);
			return 0;
		}
		a++;
		if(a==1300) a=100;
	}
}