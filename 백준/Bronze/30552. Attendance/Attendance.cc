#include<bits/stdc++.h>
using namespace std;

int n;
stack<string> st, st2;
string s;
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s=="Present!") st.pop();
		else st.push(s);
	}
	if(st.empty())
	{
		cout<<"No Absences";
		return 0;
	}
	while(!st.empty())
	{
		st2.push(st.top());
		st.pop();
	}
	while(!st2.empty())
	{
		cout<<st2.top()<<"\n";
		st2.pop();
	}
}