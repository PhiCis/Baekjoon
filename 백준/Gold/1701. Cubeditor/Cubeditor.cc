#include<bits/stdc++.h>
using namespace std;

char a[5050];
int len;
int p[5050];
int ans;

int main()
{
	scanf("%s", a);
	len=strlen(a);
	for(int i=0;i<len;i++)
	{
		int k=0;
		for(int j=i+1;j<len;j++)
		{
			while(k>0&&a[j]!=a[i+k]) k=p[k-1];
			if(a[j]==a[i+k])
			{
				k++;
				if(k>ans) ans=k;
			}
			p[j-i]=k;
		}
	}
	printf("%d", ans);
}