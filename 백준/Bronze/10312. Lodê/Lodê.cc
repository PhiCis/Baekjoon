#include<bits/stdc++.h>
using namespace std;
vector<int> v={1, 3, 9, 27, 81, 243, 729, 2187, 6561, 19683, 59049, 177147, 531441, 1594323, 4782969, 14348907};
int main()
{
	
	int t, n;
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d", &n);
		bool flag = false;
		for(int i=v.size()-1;i>=0;i--)
		{
			if(flag == false && n/v[i]>0)
			{
				flag = true;
			}
			if(flag)
			{
				printf("%d ", n/v[i]);
				n%=v[i];
			}
		}
		printf("\n");
	}
}