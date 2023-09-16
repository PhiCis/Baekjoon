#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f, g, h, i, j, k, l;
int A, B;
vector<pair<pair<int, int> , int> > v;
int main()
{
	cin>>a>>b>>c>>d;
	a=a*10+b, c=c*10+d;
	if(a>c) swap(a, c);
	cin>>e>>f>>g>>h;
	e=e*10+f, g=g*10+h;
	if(e>g) swap(e, g);
	cin>>i>>j>>k>>l;
	i=i*10+j, k=k*10+l;
	if(i>k) swap(i, k);
	if((a+10<=e&&c<=g)) v.push_back({{e, g}, 1});
	if((a+10<=i&&c<=k)) v.push_back({{i, k}, 2});
	sort(v.begin(), v.end());
	if(v.empty()) cout<<0;
	else
	{
		cout<<v[0].second<<"\n";
		a=v[0].first.first;
		b=v[0].first.second;
		printf("%d.%d %d.%d", a/10, a%10, b/10, b%10);
	}
}