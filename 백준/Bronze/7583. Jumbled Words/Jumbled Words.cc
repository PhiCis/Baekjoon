#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string a;
		getline(cin, a);
		if(a=="#") return 0;
		int s=0, e=0;
		while(e<=a.size()-1)
		{
			if(a[e]==' ')
			{
				if(s+1!=e) printf("%c", a[s]);
				for(int i=e-2;i>s;i--)
				{
					printf("%c", a[i]);
				}
				printf("%c", a[e-1]);
				printf(" ");
				s=e+1;
			}
			e++;
		}
		if(s+1!=e) printf("%c", a[s]);
		for(int i=e-2;i>s;i--)
		{
			printf("%c", a[i]);
		}
		printf("%c", a[e-1]);
		printf("\n");
	}
}