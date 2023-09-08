#include<stdio.h>
int t, n, str, ball, a, b, c, aa, bb, cc, tmpstr, tmpball, C[1010], ans;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d%d", &n, &str, &ball);
		a=n/100;
		b=(n%100)/10;
		c=n%10;
		for(int i=123;i<=987;i++)
		{
			tmpstr=0;
			tmpball=0;
			aa=i/100;
			bb=(i%100)/10;
			cc=i%10;
			if(aa==bb||bb==cc||cc==aa||bb==0||cc==0) continue;
			if(a==aa) tmpstr++;
			if(a==bb||a==cc) tmpball++;
			if(b==bb) tmpstr++;
			if(b==cc||b==aa) tmpball++;
			if(c==cc) tmpstr++;
			if(c==aa||c==bb) tmpball++;
			if(tmpstr!=str||tmpball!=ball) C[i]++;
		}
	}
	for(int i=123;i<=987;i++)
	{
		aa=i/100;
		bb=(i%100)/10;
		cc=i%10;
		if(aa==bb||bb==cc||cc==aa||bb==0||cc==0) continue;
		if(C[i]==0) 
		{
			//printf("%d ", i);
			ans++;
		}
	}
	printf("%d", ans);
}