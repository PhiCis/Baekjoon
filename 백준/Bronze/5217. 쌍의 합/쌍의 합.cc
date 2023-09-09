#include<bits/stdc++.h>
using namespace std;

vector<string> s = {
"Pairs for 0:",
"Pairs for 1:",
"Pairs for 2:",
"Pairs for 3: 1 2",
"Pairs for 4: 1 3",
"Pairs for 5: 1 4, 2 3",
"Pairs for 6: 1 5, 2 4",
"Pairs for 7: 1 6, 2 5, 3 4",
"Pairs for 8: 1 7, 2 6, 3 5",
"Pairs for 9: 1 8, 2 7, 3 6, 4 5",
"Pairs for 10: 1 9, 2 8, 3 7, 4 6",
"Pairs for 11: 1 10, 2 9, 3 8, 4 7, 5 6",
"Pairs for 12: 1 11, 2 10, 3 9, 4 8, 5 7"
};

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int a;
		scanf("%d", &a);
		cout<<s[a]<<"\n";
	}
}