#include<bits/stdc++.h>
using namespace std;

int a, b, c;
int main()
{
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if((b+c-i-j)%2==0) cout<<"v";
            else cout<<".";
        }
        cout<<"\n";
    }
}
