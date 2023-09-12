#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(const void *a, const void *b){
	return *(int*)b-*(int*)a;
}
char a[100010];
int len, b[100010], i, sum, flag;
int main()
{
	scanf("%s", a);
	len=strlen(a);
	for(i=0;i<len;i++){
		b[i]=a[i]-48;
		sum+=b[i];
		if(b[i]==0){
			flag++;
		}
	}
	if(sum%3==0&&flag){
		qsort(b, len, sizeof(int), compare);
		for(i=0;i<len;i++){
			printf("%d", b[i]);
		}
	}
	else{
		printf("-1");
	}
	return 0;
}