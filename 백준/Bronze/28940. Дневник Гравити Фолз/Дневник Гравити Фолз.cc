#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e;

int main()
{
	cin>>a>>b>>c>>d>>e;
	int f = (a/d)*(b/e);
	if(f==0) cout<<-1;
	else cout<<(c-1)/f+1;
}