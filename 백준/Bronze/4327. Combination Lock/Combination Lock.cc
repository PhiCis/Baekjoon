#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		if(a+b+c+d==0) return 0;
		cout<<9*(3*40+(a-b+40)%40+(c-b+40)%40+(c-d+40)%40)<<"\n";
	}
}