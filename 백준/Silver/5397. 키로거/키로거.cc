#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	scanf("%d", &n);
	while(n--)
	{
		string A="";
		cin>>A;
		list<char> a;
		list<char>::iterator it=a.begin();
		for(int i=0;i<A.size();i++)
		{
			if(A[i]=='<')
			{
				if(it==a.begin()) continue;
				else it--;
			}
			else if(A[i]=='>')
			{
				if(it==a.end()) continue;
				else it++;
			}
			else if(A[i]=='-')
			{
				if(it==a.begin()) continue;
				else it=a.erase(--it);
			}
			else
			{
				a.insert(it, A[i]);
			}
		}
		for (auto it2 = a.begin(); it2 != a.end(); it2++)
	    {
	    	printf("%c", *it2);
	    }
	    printf("\n");
	}
}