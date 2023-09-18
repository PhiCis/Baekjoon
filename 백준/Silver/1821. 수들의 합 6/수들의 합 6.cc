#include<bits/stdc++.h>
using namespace std;

int n, k;
int c[11][11];
int a[11];

int main()
{
    for(int i=0;i<=10;i++)
    {
        c[i][0]=c[i][i]=1;
    }
    for(int i=2;i<=10;i++)
    {
        for(int j=1;j<i;j++)
        {
            c[i][j]=c[i-1][j-1]+c[i-1][j];
        }
    }
    cin>>n>>k;
    for(int i=1;i<=n;i++) a[i]=i;
    do{
        int tmp=0;
        for(int i=1;i<=n;i++) tmp+=a[i]*c[n-1][i-1];
        if(tmp==k)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<a[j]<<" ";
            }
            return 0;
        }
    }while(next_permutation(a+1, a+n+1));
}