#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d in Ottawa\n%d in Victoria\n%d in Edmonton\n%d in Winnipeg\n%d in Toronto\n%d in Halifax\n%d in St. John's", a, (a+2100)%2400, (a+2200)%2400, (a+2300)%2400, a, (a+100)%2400, a%100>=30?(a+170)%2400:(a+130)%2400);
}