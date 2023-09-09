//
//  main.cpp
//  c6769
//
//  Created by jbkmath48128 on 2023/09/05.
//

#include<bits/stdc++.h>
using namespace std;

string a, b;
int c[5][2], n;
string s;
int main()
{
    cin>>a>>b>>n;
    for(int i=0;i<5;i++)
    {
        if(a[i*2]<='Z'&&a[i*2+1]<='Z') c[i][1]=-1;
        if(b[i*2]<='Z'&&b[i*2+1]<='Z') c[i][1]=-1;
        if(a[i*2]>='a'&&a[i*2+1]>='a'&&b[i*2+1]>='a'&&b[i*2]>='a') c[i][0]=-1;
    }
    while(n--)
    {
        cin>>s;
        for(int i=0;i<5;i++)
        {
            if((s[i]>='a'&&c[i][1]==-1)||(s[i]<='Z'&&c[i][0]==-1))
            {
                cout<<"Not their baby!\n";
                goto skip;
            }
        }
        cout<<"Possible baby.\n";
    skip:;
    }
}
