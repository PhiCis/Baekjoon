//
//  main.cpp
//  Bronze2
//
//  Created by jbkmath48128 on 2023/09/06.
//

// 11760
#include<bits/stdc++.h>
using namespace std;

int n;
string s, t;
int c[100], d[100], A, B;

int main()
{
    cin>>n>>s>>t;
    for(int i=0;i<n;i++)
    {
        if(s[i]==t[i])
        {
            c[i]=d[i]=1;
            A++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]) continue;
        for(int j=0;j<n;j++)
        {
            if(d[j]) continue;
            if(s[i]==t[j])
            {
                c[i]=d[j]=1;
                B++;
                break;
            }
        }
    }
    cout<<A<<" "<<B;
}
