#include<bits/stdc++.h>
using namespace std;

int main()
{
	for(int i=1000;i<10000;i++)
	{
		int tmp = i, ans1=0, ans2=0, ans3=0;
		while(tmp)
		{
			ans1+=tmp%10;
			tmp/=10;
		}
		tmp=i;
		while(tmp)
		{
			ans2+=tmp%12;
			tmp/=12;
		}
		tmp=i;
		while(tmp)
		{
			ans3+=tmp%16;
			tmp/=16;
		}
		if(ans1==ans2&&ans2==ans3)
		{
			printf("%d\n", i);
		}
	}
}