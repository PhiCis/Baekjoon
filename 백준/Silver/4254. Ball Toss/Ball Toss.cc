#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[50];
bool c[50];

int main()
{
	while(1)
	{
		scanf("%d", &n);
		if(n==0) return 0;
		scanf("%d", &k);
		for(int i=1;i<=n;i++)
		{
			char ch;
			scanf(" %c", &ch);
			if(ch=='L') a[i]=1;
			if(ch=='R') a[i]=-1;
			c[i]=false;
		}
		int cnt = 0;
		int prev = 1;
		int ans = 0;
		while(1)
		{
			ans++;
//			printf("%d %d\n", k, prev);
			if(c[k]==false)
			{
				c[k]=true;
				cnt++;
				if(cnt==n)
				{
					printf("Classmate %d got the ball last after %d tosses.\n", k, ans);
					break;
				}
			}
			if(a[k]==-1)
			{
				a[k]=1;
				if((k-1>0&&k-1==prev)||(k-1==0&&n==prev))
				{
					prev = k;
					k = k+1;
					if(k==n+1) k=1;
				}
				else
				{
					swap(k, prev);
					k++;					
					if(k==n+1) k=1;
				}
			}
			else
			{
				a[k]=-1;
				if((k+1<=n&&k+1==prev)||(k+1==n+1&&1==prev))
				{
					prev = k;
					k = k-1;
					if(k==0) k=n;
				}
				else
				{
					swap(k, prev);
					k--;
					if(k==0) k=n;
				}
			}			
		}
	}
}