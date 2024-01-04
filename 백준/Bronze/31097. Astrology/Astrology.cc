#include<bits/stdc++.h>
using namespace std;

int a, b, c;
int main()
{
	scanf("%d-%d-%d", &a, &b, &c);
	b=b*100+c;
	if(321<=b && b<=419) cout<<"Aries";
	else if(420<=b && b<=520) cout<<"Taurus";
	else if(521<=b && b<=620) cout<<"Gemini";
	else if(621<=b && b<=722) cout<<"Cancer";
	else if(723<=b && b<=822) cout<<"Leo";
	else if(823<=b && b<=922) cout<<"Virgo";
	else if(923<=b && b<=1022) cout<<"Libra";
	else if(1023<=b && b<=1122) cout<<"Scorpio";
	else if(1123<=b && b<=1221) cout<<"Sagittarius";
	else if(120<=b && b<=218) cout<<"Aquarius";
	else if(219<=b && b<=320) cout<<"Pisces";
	else cout<<"Capricorn";
}