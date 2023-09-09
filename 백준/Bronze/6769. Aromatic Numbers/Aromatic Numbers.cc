//
//  main.cpp
//  c6769
//
//  Created by jbkmath48128 on 2023/09/05.
//

#include<bits/stdc++.h>
using namespace std;

map<char, int> m={{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};

string s;
int main()
{
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i+=2)
    {
        if(i+2<s.size() && m[s[i+3]]>m[s[i+1]])
        {
            ans-=(s[i]-'0')*m[s[i+1]];
        }
        else{
            ans+=(s[i]-'0')*m[s[i+1]];
        }
    }
    cout<<ans;
}
