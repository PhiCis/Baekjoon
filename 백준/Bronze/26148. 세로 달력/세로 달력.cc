#include<bits/stdc++.h>
using namespace std;

long long n, m;
int main() 
{
	cin>>n>>m;
	if(n%400==0||(n%100!=0 && n%4==0)) cout<<30;
	else cout<<29;
}