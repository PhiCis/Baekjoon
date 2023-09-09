#include<stdio.h>
int n, row[15], slash[29], backslash[29];
long long ans;
void arrange(int i)
{
	register int j;
	for(j=0;j<n;j++){
		if(!(row[j]|slash[i+j]|backslash[i-j+n-1])){
			if(i==n-1) ans++;
			else{
				row[j]=slash[i+j]=backslash[i-j+n-1]=1;
				arrange(i+1);
				row[j]=slash[i+j]=backslash[i-j+n-1]=0;
			}
		}
	}
}
int main()
{
	scanf("%d", &n);
	arrange(0);
	printf("%lld", ans);
	return 0;
}