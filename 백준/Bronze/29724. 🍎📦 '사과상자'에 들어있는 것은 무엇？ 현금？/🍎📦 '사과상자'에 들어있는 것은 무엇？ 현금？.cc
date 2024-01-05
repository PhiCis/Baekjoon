#include<bits/stdc++.h>
using namespace std;

long long n, b, c, d, ans1, ans2;
char a;

int main()
{
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c>>d;
		if(a=='A') ans1+=1000+500*(b/12)*(c/12)*(d/12), ans2+=4000*(b/12)*(c/12)*(d/12);
		else ans1+=6000;
	}
	cout<<ans1<<"\n"<<ans2;
}