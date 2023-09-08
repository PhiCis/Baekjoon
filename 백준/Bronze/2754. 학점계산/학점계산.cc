#include<bits/stdc++.h>
using namespace std;

string s, a[13]={"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D+", "D0", "D-", "F"};
double d[13]={4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7, 0.0};

int main()
{
	cin>>s;
	for(int i=0;i<13;i++)
	{
		if(s==a[i])
		{
			printf("%.1lf", d[i]);
		}
	}
}