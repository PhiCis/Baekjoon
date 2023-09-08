#include<stdio.h>
int a, b, pnt, i, aM, am, bM, bm, AM[10], Am[10], BM[10], Bm[10];
int main()
{
	scanf("%d%d", &a, &b);
	pnt=0;
	while(a)
	{
		pnt++;
		AM[pnt]=a%10;
		Am[pnt]=a%10;
		if(AM[pnt]==5) AM[pnt]=6;
		if(Am[pnt]==6) Am[pnt]=5;
		a/=10;
	}
	pnt=0;
	while(b)
	{
		pnt++;
		BM[pnt]=b%10;
		Bm[pnt]=b%10;
		if(BM[pnt]==5) BM[pnt]=6;
		if(Bm[pnt]==6) Bm[pnt]=5;
		b/=10;
	}
	pnt=1;
	for(i=1;i<=7;i++)
	{
		aM+=AM[i]*pnt;
		am+=Am[i]*pnt;
		bM+=BM[i]*pnt;
		bm+=Bm[i]*pnt;
		pnt*=10;
	}
	printf("%d %d", am+bm, aM+bM);
}