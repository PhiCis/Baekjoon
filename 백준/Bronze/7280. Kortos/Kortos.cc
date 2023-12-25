#include<bits/stdc++.h>
using namespace std;

char c;
int n, C, N;
int main()
{
	for(int i=1;i<52;i++)
	{
		cin>>c>>n;
		C+=(int)c;
		N+=n;
	}
	cout<<(char)(((int)'B'+(int)'K'+(int)'S'+(int)'V')*13-C)<<" "<<(2*13*14-N);
}