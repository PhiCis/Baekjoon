#include<bits/stdc++.h>
using namespace std;

long long n;
int main()
{
	cin>>n;
	printf("%.10lf", pow(sqrt((double)n/3.141592653589793)*2+2, 2));
}