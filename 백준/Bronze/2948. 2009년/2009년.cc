#include<bits/stdc++.h>
using namespace std;

vector<int> c = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
vector<string> d = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	cout<<d[(c[b-1]+a+2)%7];
}