#include<stdio.h>
#include<math.h>
bool prime(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}
int main()
{
	int n, a;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a);
		for(int j=a/2;;j--){
			if(prime(j)&&prime(a-j)){
				printf("%d %d\n", j, a-j);
				break;
			}
		}
	}
}