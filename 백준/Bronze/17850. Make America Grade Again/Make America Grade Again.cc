#include<bits/stdc++.h>
using namespace std;

double a, b, c, d;
int n;
double A[4][2];
string s, t;
double u, v;

int main()
{
	cin>>a>>b>>c>>d>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s>>t;
		scanf("%lf/%lf", &u, &v);
		if(s=="Lab") A[0][0]+=u, A[0][1]+=v;
		if(s=="Hw") A[1][0]+=u, A[1][1]+=v;
		if(s=="Proj") A[2][0]+=u, A[2][1]+=v;
		if(s=="Exam")  A[3][0]+=u, A[3][1]+=v;
	}
	cout<<(int)(a*A[0][0]/A[0][1]+b*A[1][0]/A[1][1]+c*A[2][0]/A[2][1]+d*A[3][0]/A[3][1]);
}