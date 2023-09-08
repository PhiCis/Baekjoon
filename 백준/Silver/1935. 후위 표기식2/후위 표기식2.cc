#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
stack<double> s;
int n;
double c[26];
char a[110];
int main()
{
	scanf("%d", &n);
	scanf(" %s", a);
	for(int i=0;i<n;i++)
	{
		scanf("%lf", &c[i]);
	}
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			s.push(c[a[i]-'A']);
		}
		if(a[i]=='+')
		{
			double A=s.top();
			s.pop();
			double B=s.top();
			s.pop();
			s.push(A+B);
		}
		if(a[i]=='-')
		{
			double A=s.top();
			s.pop();
			double B=s.top();
			s.pop();
			s.push(B-A);
		}
		if(a[i]=='*')
		{
			double A=s.top();
			s.pop();
			double B=s.top();
			s.pop();
			s.push(A*B);
		}
		if(a[i]=='/')
		{
			double A=s.top();
			s.pop();
			double B=s.top();
			s.pop();
			s.push(B/A);
		}
	}
	printf("%.2lf", s.top());
}