#include<bits/stdc++.h>
using namespace std;

int n;
string s[110];
int A;
int B;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		if(s[i]=="KBS1") A=i;
		if(s[i]=="KBS2") B=i;
	}
	if(A>B) B++;
	if(A!=1)
	{
		for(int i=2;i<=A;i++) cout<<1;
		for(int i=2;i<=A;i++) cout<<4;
	}
	cout<<1;
	if(B!=2)
	{
		for(int i=3;i<=B;i++) cout<<1;
		for(int i=3;i<=B;i++) cout<<4;
	}
	
}