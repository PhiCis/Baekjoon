#include <bits/stdc++.h>
using namespace std; 

vector<int> getPi(string p)
{ 
	int m = (int)p.size(), j=0; 
	vector<int> pi(m, 0); 
	for(int i = 1; i< m ; i++)
	{ 
		while(j > 0 && p[i] != p[j]) j = pi[j-1]; 
		
		if(p[i] == p[j]) pi[i] = ++j;
	} 
	return pi;
} 

vector<int> kmp(string s, string p)
{ 
	vector<int> ans; 
	auto pi = getPi(p); 
	int n = (int)s.size(), m = (int)p.size(), j =0; 
	
	for(int i = 0 ; i < n ; i++)
	{ 
		while(j>0 && s[i] != p[j]) j = pi[j-1]; 
		
		if(s[i] == p[j])
		{
			if(j==m-1)
			{ 
				ans.push_back(i-m+1); 
				j = pi[j]; 
			}
			else
			{ 
				j++; 
			} 
		} 
	} 
	return ans; 
} 

int main()
{ 
	string s1, s2, p; 
	getline(cin, s1);
	getline(cin, s2); 
	getline(cin, p); 
	auto matched1 = kmp(s1, p);
	auto matched2 = kmp(s2, p);
	if((int)matched1.size()&&(int)matched2.size())
	{
		printf("YES");
	} 
	else
	{
	 	printf("NO");
	}
	return 0; 
}
