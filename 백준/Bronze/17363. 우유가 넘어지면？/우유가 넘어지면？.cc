#include<bits/stdc++.h>
using namespace std;

char a[1010][1010];

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int j=m;j>=1;j--)
    {
        for(int i=1;i<=n;i++)
        {
            if(a[i][j]=='-') cout<<"|";
            else if(a[i][j]=='|') cout<<"-";
            else if(a[i][j]=='/') cout<<"\\";
            else if(a[i][j]=='\\') cout<<"/";
            else if(a[i][j]=='^') cout<<"<";
            else if(a[i][j]=='<') cout<<"v";
            else if(a[i][j]=='v') cout<<">";
            else if(a[i][j]=='>') cout<<"^";
            else cout<<a[i][j];
        }
        cout<<"\n";
    }
}