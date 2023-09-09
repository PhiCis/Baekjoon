#include<bits/stdc++.h>
using namespace std;

int k;
int main()
{
	scanf("%d" , &k);
	int ttmp=k;
	int tmp=1;
	int cnt=0;
	int ans=0;
	k--;
	while(k)
	{
		k>>=1;
		tmp<<=1;
		cnt++;
	}
	printf("%d ", tmp);
	for(int i=0;i<cnt;i++)
	{
		if((ttmp>>i)&1)
		{
			printf("%d", cnt-i);
			return 0;
		}
	}
	printf("0");
}