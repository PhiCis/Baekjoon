#include<bits/stdc++.h>
using namespace std;

char a[36] = {
	'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
	'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
	'U', 'V', 'W', 'X', 'Y', 'Z'
	};

void print(int b, int c)
{
	if(b==0) return;
	print(b/c, c);
	printf("%c", a[b%c]);
}

int main()
{
	int b, c;
	scanf("%d%d", &b, &c);
	print(b, c);
}