#include<bits/stdc++.h>
using namespace std;

string a;
int b, c;
int main()
{
	while(1)
	{
		cin>>a>>b>>c;
		if(a=="#"&&b+c==0) return 0;
		cout<<a<<" ";
		if(b>17||c>=80)
		{
			printf("Senior\n");
		}
		else
		{
			printf("Junior\n");
		}
	}
}