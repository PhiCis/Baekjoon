#include<stdio.h>
#include<math.h>
int n, i, j, k, a[11][100], l[11], tmp, t;
void superprime(int n){
	l[0]=1;
	for(i=1;i<=n;i++){
		for(j=0;j<l[i-1];j++){
			for(k=0;k<10;k++){
				tmp=10*a[i-1][j]+k;
				if(tmp==1) continue;
				if(tmp==2) a[i][l[i]++]=tmp;
				if(!(k&1)) continue;
				else{
					for(t=3;t<=sqrt(tmp);t+=2){
						if(tmp%t==0) goto skip;
					}
					a[i][l[i]++]=tmp;
					skip:;
				}
			}
		}
		
	}
}
int main()
{
	scanf("%d", &n);
	superprime(n);
	for(i=0;i<l[n];i++){
		printf("%d\n", a[n][i]);
	}
}