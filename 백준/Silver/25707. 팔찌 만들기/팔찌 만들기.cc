#include<bits/stdc++.h>
using namespace std;

int n;
int M, m=2e9;
int main() 
{
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		M = max(M, v[i]);
		m = min(m, v[i]);
	}
	cout<<(M-m)*2;
}