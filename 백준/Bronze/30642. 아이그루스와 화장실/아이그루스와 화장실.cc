#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    string s;
    cin>>n>>s>>k;
    if(s=="annyong")
    {
    	if(k&1) cout<<k;
    	else cout<<k-1;
	}
	else
	{
		if(k%2==0) cout<<k;
		else if(k==1) cout<<2;
		else cout<<k-1;
	}
}