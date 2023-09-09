#include<bits/stdc++.h>
using namespace std;

int c[10];

bool f(int n){
	for(int i=0;i<10;i++){
		c[i]=0;
	}
	while(n){
		c[n%10]++;
		n/=10;
	}
	for(int i=0;i<10;i++){
		if(c[i]>=2) return false;
	}
	return true;
}

int main()
{
	int a, b;
	while(cin>>a>>b){
		int ans = 0;
		for(int i=a;i<=b;i++){
			if(f(i)) ans++;
		}
		printf("%d\n", ans);
	}
}