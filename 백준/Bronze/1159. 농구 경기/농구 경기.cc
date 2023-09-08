#include<stdio.h>
int n, i, chk[30], c;
char a[200][100];
int main()
{
	scanf("%d\n", &n);
	for(i=0;i<n;i++){
		scanf("%s", a[i]);
		//printf("%d", a[i][0]);
		chk[(int)a[i][0]-97]++;
	}
	for(i=0;i<26;i++){
		if(chk[i]>=5){
			printf("%c", i+97);
			c++;
		}
	}
	if(c==0) printf("PREDAJA");
}