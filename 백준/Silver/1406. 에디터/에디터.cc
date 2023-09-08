#include<bits/stdc++.h>
using namespace std;
list<char> a;
string A;
char c;
int q;
int main()
{
	cin>>A;
	for(int i=0;i<A.size();i++)
    {
        a.push_back(A[i]);
    }
	list<char>::iterator it=a.end();
	scanf("%d", &q);
	while(q--)
	{
		scanf(" %c", &c);
		if(c=='L')
		{
			if(it==a.begin()) continue;
			else it--;
		}
		else if(c=='D')
		{
			if(it==a.end()) continue;
			else it++;
		}
		else if(c=='B')
		{
			if(it==a.begin()) continue;
			else it=a.erase(--it);
		}
		else if(c=='P')
		{
			char s;
			scanf(" %c", &s);
			a.insert(it, s);
		}
	}
	for (auto it2 = a.begin(); it2 != a.end(); it2++)
    {
    	printf("%c", *it2);
    }
}