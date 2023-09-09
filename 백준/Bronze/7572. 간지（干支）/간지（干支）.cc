#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	printf("%c%d", (N+8)%12+'A', (N+6)%10);
}