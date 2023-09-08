#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<double, int> a, pair<double, int> b)
{
	if(a.first!=b.first) return a.first>b.first;
	else return a.second<b.second;
}

int main()
{
	double a, b, c, d;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	vector<pair<double, int> > v(4);
	v[0]={a/c+b/d, 0};
	v[1]={c/d+a/b, 1};
	v[2]={d/b+c/a, 2};
	v[3]={b/a+d/c, 3};
	sort(v.begin(), v.end(), cmp);
	printf("%d", v[0].second);
}