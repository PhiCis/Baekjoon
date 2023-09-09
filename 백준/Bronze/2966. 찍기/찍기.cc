#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	scanf("%d", &n);
	vector<int> a = {0, 1, 2, 0, 1, 2};
	vector<int> b = {1, 0, 1, 2};
	vector<int> c = {2, 2, 0, 0, 1, 1};
	cin>>s;
	int A = 0, B = 0, C = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i]-'A'==a[i%6]) A++;
		if(s[i]-'A'==b[i%4]) B++;
		if(s[i]-'A'==c[i%6]) C++;
	}
	int ans = max(A, max(B, C));
	printf("%d\n", ans);
	if(ans==A) printf("Adrian\n");
	if(ans==B) printf("Bruno\n");
	if(ans==C) printf("Goran\n");
}