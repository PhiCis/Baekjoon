#include<bits/stdc++.h>
using namespace std;

string t[8]={"R", "L", "B", "T", "RT", "LT", "RB", "LB"};
int D[8][2]={1, 0, -1, 0, 0, -1, 0, 1, 1, 1, -1, 1, 1, -1, -1, -1};

int main()
{
	char A, C;
	int a, b, c, d, e;
	scanf(" %c%d %c%d %d", &A, &b, &C, &d, &e);
	a=A-'A'+1;
	c=C-'A'+1;
	while(e--)
	{
		string s;
		cin>>s;
		for(int i=0;i<8;i++)
		{
			if(t[i]==s)
			{
				int ta=a, tb=b, tc=c, td=d;
				if(a+D[i][0]==c&&b+D[i][1]==d)
				{
					tc+=D[i][0];
					td+=D[i][1];
				}
				ta+=D[i][0];
				tb+=D[i][1];
				if(ta>8||ta<1||tb>8||tb<1||tc>8||tc<1||td>8||td<1) continue;
				a=ta, b=tb, c=tc, d=td;
			}
		}
	}
	printf("%c%d\n%c%d", a+'A'-1, b, c+'A'-1, d);
}