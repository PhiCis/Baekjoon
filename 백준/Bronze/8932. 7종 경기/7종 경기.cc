#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, c, d, e, f, g;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
		printf("%d\n", (int)(9.23076*pow(abs(26.7-a), 1.835))
					+(int)(1.84523*pow(abs(75.0-b), 1.348))
					+(int)(56.0211*pow(abs(1.5-c), 1.05))
					+(int)(4.99087*pow(abs(42.5-d), 1.81))
					+(int)(0.188807*pow(abs(210.0-e), 1.41))
					+(int)(15.9803*pow(abs(3.8-f), 1.04))
					+(int)(0.11193*pow(abs(254.0-g), 1.88)));
	}
}