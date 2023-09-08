#include<stdio.h>
int n, ans, i, t, j, a[10], k;
int main()
{
	scanf("%d", &n);
	while(n>ans){
		i++;
		t=i;
		j=0;
		while(t>0){
			a[++j]=t%10;
			t/=10;
		}
		for(k=1;k<=j-2;k++){
			if(a[k]==6&&a[k+1]==6&&a[k+2]==6){
				ans++;
				break;
			}
		}
	}
	printf("%d", i);
}