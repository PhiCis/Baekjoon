#include<bits/stdc++.h>
using namespace std;

string s = "BABCBCDCDADA";

int main()
{
	int n, k;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &k);
		printf("%c\n", s[k%12]);
	}
}