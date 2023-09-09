#include<stdio.h>
#include<string.h>
int n, i, j, ans, cnt, len;
char a[100];
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		ans=cnt=0;
		scanf("%s", a);
		len=strlen(a);
		for(j=0;j<len;j++){
			if(a[j]=='O'){
				cnt++;
				ans+=cnt;
			}
			else{
				cnt=0;
			}
			a[j]=0;
		}
		printf("%d\n", ans);
	}
}