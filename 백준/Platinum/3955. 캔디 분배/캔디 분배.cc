#include<stdio.h>
#include<algorithm>
using namespace std;
long long a, b, G, i, t, x, ans;

struct arr{
	long long num, div, in, pre;
}arr[100];

int main()
{
	scanf("%lld", &t);
	for(x=0;x<t;x++)
	{
		scanf("%lld %lld", &b, &a);
		if(a==1)
		{
			if(b+1>1e9) printf("IMPOSSIBLE\n");
			else printf("%lld\n", b+1);
			continue;
		}
		else if(b==1)
		{
			printf("1\n");
			continue;
		}
		G=__gcd(a, b);
		if(G!=1||b==1)
		{
			printf("IMPOSSIBLE\n");
		}
		else
		{
			for(i=0;i<100;i++)
			{
				arr[i].num=arr[i].div=arr[i].in=arr[i].pre=0;
			}
			i=0;
			arr[++i].num=a;
			arr[++i].num=b;
			while(arr[i].num!=1)
			{
				arr[i].div=arr[i-1].num/arr[i].num;
				arr[i+1].num=arr[i-1].num-arr[i].num*arr[i].div;
				i++;
			}
			arr[i-1].pre=1;
			arr[i-1].in=0;
			for(int j=i-2;j>0;j--)
			{
				arr[j].in=arr[j+1].pre;
				arr[j].pre=arr[j+1].in-arr[j+1].div*arr[j+1].pre;
			}
			ans=arr[1].in;
			while(ans<0)
			{
				ans+=b;
			}
			printf("%lld\n", ans%b);
		}
	}
}