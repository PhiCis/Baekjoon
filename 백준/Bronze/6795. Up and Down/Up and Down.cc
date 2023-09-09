#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e, A, B;

int main()
{
	cin>>a>>b>>c>>d>>e;
	for(int i=0;i<e;i++)
	{
		if(i%(a+b)<a) A++;
		else A--;
		if(i%(c+d)<c) B++;
		else B--;
//		cout<<A<<B;
	}
	if(A<B) cout<<"Byron";
	else if(A>B) cout<<"Nikky";
	else cout<<"Tied";
}