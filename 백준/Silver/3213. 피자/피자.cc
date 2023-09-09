#include<bits/stdc++.h>
using namespace std;
int n, a[3];
string s;
int ans;
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		cin>>s;
		if(s=="1/2"){
			a[0]++;
		}
		if(s=="1/4"){
			a[1]++;
		}
		if(s=="3/4"){
			a[2]++;
		}
	}
	ans+=a[2];
	a[1]=max(0, a[1]-a[2]);
	a[2]=0;
	ans+=(a[0]*2+a[1]+3)/4;
	printf("%d", ans);
}