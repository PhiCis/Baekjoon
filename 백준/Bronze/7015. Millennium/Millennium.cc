#include<bits/stdc++.h>
using namespace std;

int n, a, b, c, cnt;

int main()
{
	cin>>n;
	while(n--)
	{
		cnt=0;
		cin>>a>>b>>c;
		while(a%1000)
		{
			c++;
			if(a%3 && b==10 && c>19) a++, b=c=1;
			else if(a%3==0 && b==10 && c>20) a++, b=c=1;
			else if(a%3 && b%2==0 && c>19) c=1, b++;
			else if(c>20) c=1, b++;
			cnt++;
		}
		cout<<cnt<<"\n";
	}
}