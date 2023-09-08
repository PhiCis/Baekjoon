#include<bits/stdc++.h>
using namespace std;
int n, a[100], b[100];
int ans;

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d%d", &a[i], &b[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				ans = max(ans, abs(a[i]*b[j]+a[j]*b[k]+a[k]*b[i]-a[i]*b[k]-a[j]*b[i]-a[k]*b[j]));
			}
		}
	}
	if(ans&1) printf("%d.5", ans/2);
	else printf("%d", ans/2);
}