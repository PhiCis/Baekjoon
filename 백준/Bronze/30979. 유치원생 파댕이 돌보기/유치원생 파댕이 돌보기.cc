#include<bits/stdc++.h>
using namespace std;

int n, m, a, s;
int main() 
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a;
		s+=a;
	}
	if(n<=s) cout<<"Padaeng_i Happy";
	else cout<<"Padaeng_i Cry";
}