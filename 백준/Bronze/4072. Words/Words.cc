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
				for(int i=e-1;i>=s;i--)
				{
					printf("%c", a[i]);
				}
				printf(" ");
				s=e+1;
			}
			e++;
		}
		for(int i=e-1;i>=s;i--)
		{
			printf("%c", a[i]);
		}
		printf("\n");
	}
}