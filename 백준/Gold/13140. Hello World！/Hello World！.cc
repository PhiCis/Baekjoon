#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	scanf("%d", &a);
	if(a>199998||a<20000)
	{
		printf("No Answer");
		return 0;
	}
	for(int h=1;h<=9;h++)
	{
		for(int e=0;e<=9;e++)
		{
			if(h==e) continue;
			for(int l=0;l<=9;l++)
			{
				if(h==l||e==l) continue;
				for(int o=0;o<=9;o++)
				{
					if(h==o||e==o||l==o) continue;
					for(int w=1;w<=9;w++)
					{
						if(h==w||e==w||l==w||o==w) continue;
						for(int r=0;r<=9;r++)
						{
							if(h==r||e==r||l==r||o==r||w==r) continue;
							for(int d=0;d<=9;d++)
							{
								if(h==d||e==d||l==d||o==d||w==d||r==d) continue;
								if(h*10000+e*1000+l*120+o*1001+w*10000+r*100+d==a)
								{
									printf("  %d%d%d%d%d\n+ %d%d%d%d%d\n-------\n%7d", h, e, l, l, o, w, o, r, l, d, a);
									return 0;
								}
							}
						}
					}
				}
			}
		}
	}
	printf("No Answer");
}