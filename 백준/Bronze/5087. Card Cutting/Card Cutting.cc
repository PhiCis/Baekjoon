#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int A=0, B=0;
		while(1)
		{
			string s;
			cin>>s;
			if(s=="*") break;
			if(s=="#") return 0;
			if(s=="A"||(s[s.size()-1]&1)) A++;
			else B++;
		}
		if(A>B) printf("Cheryl\n");
		else if(A==B) printf("Draw\n");
		else printf("Tania\n");
	}
}