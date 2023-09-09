//
//  main.cpp
//  c6769
//
//  Created by jbkmath48128 on 2023/09/05.
//

#include<bits/stdc++.h>
using namespace std;

int m[26];

string s, t;
int main()
{
    getline(cin, s);
    getline(cin, t);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z') m[s[i]-'A']++;
    }
    for(int i=0;i<t.size();i++)
    {
        if(t[i]>='A'&&t[i]<='Z') m[t[i]-'A']--;
    }
    for(int i=0;i<26;i++)
    {
        if(m[i])
        {
            cout<<"Is not an anagram.";
            return 0;
        }
    }
    cout<<"Is an anagram.";
}
