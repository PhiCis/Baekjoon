#include<bits/stdc++.h>
using namespace std;

long long a, b;
int main()
{
	scanf("%lld%lld", &a, &b);
	if(a==1){
		printf("%lld", 8*b);
	}
	if(a==2){
		if(b&1){
			printf("%lld", 8*(b/2)+7);
		}
		else{
			printf("%lld", 8*(b/2)+1);
		}
	}
	if(a==3){
		if(b&1){
			printf("%lld", 8*(b/2)+6);
		}
		else{
			printf("%lld", 8*(b/2)+2);
		}
	}
	if(a==4){
		if(b&1){
			printf("%lld", 8*(b/2)+5);
		}
		else{
			printf("%lld", 8*(b/2)+3);
		}
	}
	if(a==5){
		printf("%lld", 8*b+4);
	}
}