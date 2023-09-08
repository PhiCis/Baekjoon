#include<stdio.h>
int n, m, i, j, A, B, min=2500, p, q;
char a[55][55];
int main()
{
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf(" %c", &a[i][j]);
		}
	}
	for(p=0;p<=n-8;p++){
		for(q=0;q<=m-8;q++){
			A=B=0;
			for(i=p;i<p+8;i++){
				for(j=q;j<q+8;j++){
					if((i+j)%2==0){
						if(a[i][j]=='W') A++;
						else B++;
					}
					else{
						if(a[i][j]=='B') A++;
						else B++;
					}
				}
			}
			if(min>(A<B?A:B)) min=A<B?A:B;
		}
	}
	printf("%d", min);
}