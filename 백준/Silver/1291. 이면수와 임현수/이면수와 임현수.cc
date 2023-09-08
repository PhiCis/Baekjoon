#include<bits/stdc++.h>
using namespace std;

int n;
bool a1, a2;

bool f(int n)
{
	if(n!=4 && n<6) return false;
	int tmp=0;
	while(n)
	{
		tmp+=n%10;
		n/=10;
	}
	if(tmp&1) return true;
	return false;
}
bool g(int n)
{
	if(n==2||n==4) return true;
	if(n==1) return false;
	int tmp=0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			tmp++;
			while(n%i==0) n/=i;
		}
	}
	if(n!=1) tmp++;
	if(tmp&1) return false;
	return true;
}
int main()
{
	scanf("%d", &n);
	a1=f(n);
	a2=g(n);
	if(a1&a2) printf("4");
	else if(a1) printf("1");
	else if(a2) printf("2");
	else printf("3");
}