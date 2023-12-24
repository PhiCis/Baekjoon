#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin>>a;
	if(a>=620 && a<=780) cout<<"Red";
	if(a>=590 && a<620) cout<<"Orange";
	if(a>=570 && a<590) cout<<"Yellow";
	if(a>=495 && a<570) cout<<"Green";
	if(a>=450 && a<495) cout<<"Blue";
	if(a>=425 && a<450) cout<<"Indigo";
	if(a>=380 && a<425) cout<<"Violet";
}