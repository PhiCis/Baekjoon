#include<bits/stdc++.h>
using namespace std;

int T;
char a[220];
int len;

bool f(int k)
{
	if(k>=len) return true;
	if(a[k]=='0')
	{
		k++;
		if(a[k]!='1') return false;
		k++;
		return f(k);
	}
	else
	{
		k++;
		if(a[k]!='0') return false;
		k++;
		if(a[k]!='0') return false;
		k++;
		while(a[k]=='0') k++;
		if(a[k]!='1') return false;
		k++;
		while(a[k]=='1')
		{
			if(f(k)==true) return true;
			k++;
		}
		return f(k);
	}
}

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		for(int i=0;i<220;i++)
		{
			a[i]=0;
		}
		scanf(" %s", a);
		len=strlen(a);
		printf("%s\n", f(0)?"YES":"NO");
	}
}