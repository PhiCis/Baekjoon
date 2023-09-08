#include<bits/stdc++.h>
using namespace std;

int n, c[8];
int s[8][6]={
	0, 0, 0, 0, 0, 0, 
	0, 0, 1, 1, 1, 1,
	0, 1, 0, 0, 1, 1,
	0, 1, 1, 1, 0, 0,
	1, 0, 0, 1, 1, 0,
	1, 0, 1, 0, 0, 1,
	1, 1, 0, 1, 0, 1,
	1, 1, 1, 0, 1, 0
};
int a;
string S;

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<8;j++) c[j]=0;
		for(int j=0;j<6;j++)
		{
			scanf("%1d", &a);
			for(int k=0;k<8;k++)
			{
				if(a!=s[k][j]){
					c[k]++;
				}
			}
		}
		for(int j=0;j<8;j++)
		{
			if(c[j]<2)
			{
				S+=('A'+j);
				goto skip;
			}
		}
		printf("%d", i+1);
		return 0;
		skip:;
	}
	cout<<S;
}