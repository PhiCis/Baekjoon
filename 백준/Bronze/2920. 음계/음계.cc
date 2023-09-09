#include<stdio.h>
int main()
{
	int a[10], i, asc=0, dsc=0;
	for(i=1;i<=8;i++){
		scanf("%d", &a[i]);
	}
	for(i=1;i<=8;i++){
		if(a[i]==i) asc++;
		if(a[i]==9-i) dsc++;
	}
	if(asc==8) printf("ascending");
	else if(dsc==8) printf("descending");
	else printf("mixed");
}