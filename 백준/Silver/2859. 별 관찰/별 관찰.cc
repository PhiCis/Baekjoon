#include<bits/stdc++.h>
using namespace std;

int a, b;
int t1, t2, d1, d2;

string s[7]={"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

int main()
{
	scanf("%d:%d", &a, &b);
	t1=a*60+b;
	scanf("%d:%d", &a, &b);
	t2=a*60+b;
	scanf("%d:%d", &a, &b);
	d1=a*60+b;
	scanf("%d:%d", &a, &b);
	d2=a*60+b;
	if(t1<t2)
	{
		swap(t1, t2);
		swap(d1, d2);
	}
	for(int i=0;i<=1000000;i++)
	{
		if((t1+d1*i)%d2==t2%d2)
		{
			cout<<s[(t1+d1*i)%(1440*7)/1440]<<"\n";
			printf("%02d:%02d", (t1+d1*i)%1440/60, (t1+d1*i)%60);
			return 0;
		}
	}
	printf("Never");
}