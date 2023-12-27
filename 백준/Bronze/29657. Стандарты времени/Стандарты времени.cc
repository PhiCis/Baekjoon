#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f, g, h, i;
int main()
{
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
	int tmp=b*c*g+c*h+i;
	cout<<tmp/(e*f)<<" "<<tmp%(e*f)/f<<" "<<tmp%f;
}