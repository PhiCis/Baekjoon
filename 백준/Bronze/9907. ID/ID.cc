#include<bits/stdc++.h>
using namespace std;

int a, A[10]={0, 2, 7, 6, 5, 4, 3, 2,};
int ans;
char B[11]={'J', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'Z'};

int main()
{
	for(int i=1;i<=7;i++)
	{
		scanf("%1d", &a);
		ans+=a*A[i];
	}
	ans%=11;
	cout<<B[ans];
}