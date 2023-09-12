#include<bits/stdc++.h>
using namespace std;
int n, d[1001], a[1001];
int main() 
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
    d[0]=0; d[1]=a[1];
    for(int i=2;i<=n;i++) 
	{
        for(int j=1;j<=i;j++) 
		{
            d[i]=max(d[i],d[i-j]+a[j]);
        }
    }
    printf("%d", d[n]);
    return 0;
}