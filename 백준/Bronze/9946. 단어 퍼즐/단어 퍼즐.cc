#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0;
	while(1)
	{
		cnt++;
		string a, b;
		cin>>a>>b;
		if(a=="END"&&b=="END") return 0;
		vector<char> A, B;
		for(int i=0;i<a.size();i++)
		{
			A.push_back(a[i]);
		}
		for(int i=0;i<b.size();i++)
		{
			B.push_back(b[i]);
		}
		sort(A.begin(), A.end());
		sort(B.begin(), B.end());
		printf("Case %d: ", cnt);
		if(A==B) printf("same\n");
		else printf("different\n");
	}
}