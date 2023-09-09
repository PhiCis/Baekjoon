#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		double a;
		scanf("%lf", &a);
		if(a==-1) return 0;
		printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", a, a*0.167);
	}
}