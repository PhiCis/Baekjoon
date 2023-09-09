#include <bits/stdc++.h> 
using namespace std; 
map<string, bool> visited; 
int n;
int main() 
{
	scanf("%d", &n); 
	vector<string> v; 
	for(int i=0;i<n;i++) 
	{ 
		string s, s2; 
		cin >> s >> s2; 
		if (visited.count(s)) 
		{ 
			if (s2=="enter") 
			{ 
				visited[s]=true; 
			} 
			else 
			{ 
				visited[s]=false; 
			} 
			continue;
		}
		v.push_back(s); 
		visited[s]=true; 
	} 
	sort(v.begin(), v.end(), greater<string>()); 
	int result=0; 
	for (int i=0;i<v.size();i++) 
	{ 
		if (visited[v[i]]==true) 
		{ 
			cout<<v[i]<<"\n"; 
		} 
	} 
	return 0; 
}
