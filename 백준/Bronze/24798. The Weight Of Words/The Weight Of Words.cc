#include<bits/stdc++.h>
using namespace std;
int l, w;
int main()
{
	cin>>l>>w;
	if(w<l||w>26*l) cout<<"impossible";
    else
	for(int i=0;i<l;i++)
	{
		cout<<(char)('a'-1+w/l+(w%l>i?1:0));
	}
}