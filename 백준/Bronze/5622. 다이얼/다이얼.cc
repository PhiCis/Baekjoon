#include<stdio.h>
#include<string.h>
int i, len, ans;
char a[20];
int main()
{
	scanf("%s", a);
	len=strlen(a);
	for(i=0;i<len;i++){
		switch(a[i]){
			case 65:case 66:case 67:
				ans+=3; break;
			case 68:case 69:case 70:
				ans+=4; break;
			case 71:case 72:case 73:
				ans+=5; break;
			case 74:case 75:case 76:
				ans+=6; break;
			case 77:case 78:case 79:
				ans+=7; break;
			case 80:case 81:case 82:case 83:
				ans+=8; break;
			case 84:case 85:case 86:
				ans+=9; break;
			case 87:case 88:case 89:case 90:
				ans+=10; break;
		}
	}
	printf("%d", ans);
}