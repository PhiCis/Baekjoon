#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int y=2014, m=4, d=1;
	while(n--)
	{
		d++;
		if(d==32&&(m==1||m==3||m==5||m==7||m==8||m==10))
		{
			d=1, m++;
		}
		else if(d==32&&m==12)
		{
			y++, m=d=1;
		}
		else if(d==31&&(m==4||m==6||m==9||m==11))
		{
			d=1, m++;
		}
		else if(m==2)
		{
			if(d==29&&(y%4!=0||(y%100==0&&y%400!=0)))
			{
				m++, d=1;
			}
			else if(d==30&&y%4==0)
			{
				m++, d=1;
			}
		}
	}
	printf("%04d-%02d-%02d", y, m, d);
}