#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A, B;
	int a, b, c;
	scanf("%d:%d:%d", &a, &b, &c);
	A = a*3600+b*60+c;
	scanf("%d:%d:%d", &a, &b, &c);
	B = a*3600+b*60+c;
	B-=A;
	if(B<=0) B+=86400;
	printf("%02d:%02d:%02d", B/3600, B%3600/60, B%60);
}