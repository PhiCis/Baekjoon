#include<bits/stdc++.h>
using namespace std;

int n;
double a, b, c, d, e;
string s;
double ansi;
int ansii;
double A[10];
bool cmp(double a, double b){
	return a>b;
}
int main()
{
	cin>>n;
	for(int i=0;i<6;i++)
	{
		cin>>s>>a>>b>>c>>d>>e;
		A[i]=0.06*a+0.14*b+0.24*c+0.56*d+0.3*e;
		if(s=="Taiwan") ansi=A[i];
	}
	sort(A, A+6, cmp);
	for(int i=0;i<6;i++) if(A[i]==ansi) ansii=i;
	if(ansii<n%6) cout<<n/6+1;
	else cout<<n/6;
}