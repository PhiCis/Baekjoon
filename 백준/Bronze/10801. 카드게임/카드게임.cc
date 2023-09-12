#include<bits/stdc++.h>
using namespace std;

int a[10], b[10];
int A, B;

int main()
{
	for(int i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=0;i<10;i++)
	{
		scanf("%d", &b[i]);
	}
	for(int i=0;i<10;i++)
	{
		if(a[i]>b[i]) A++;
		if(a[i]<b[i]) B++;
	}
	if(A>B)
	{
		printf("A");
	}
	else if(A<B)
	{
		printf("B");
	}
	else
	{
		printf("D");
	}
}