#include<stdio.h>
#include<string.h>
int n, i, len, j, stack[110], pnt;
char a[110];
int main()
{
	scanf("%d", &n);
	while(1){
		fgets(a, 110, stdin);
		len=strlen(a);
		if(len==2&&a[0]=='.') return 0;
		pnt=0;
		for(j=0;j<len;j++){
			if(a[j]=='(') stack[++pnt]=1;
			if(a[j]=='[') stack[++pnt]=2;
			if(a[j]==')'){
				if(stack[pnt]==1) pnt--;
				else{
					printf("no\n");
					goto skip;
				}
			}
			if(a[j]==']'){
				if(stack[pnt]==2) pnt--;
				else{
					printf("no\n");
					goto skip;
				}
			}
		}
		if(pnt==0) printf("yes\n");
		else printf("no\n");
		skip:;
	}
}