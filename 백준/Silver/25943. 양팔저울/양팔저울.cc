#include<bits/stdc++.h>
using namespace std;

int n, a[10010], A, B;
int d[10]={0, 1, 1, 2, 2, 1, 2, 2, 3, 3};

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i==1) A+=a[i];
        else if(i==2) B+=a[i];
        else{
            if(A>B) B+=a[i];
            else A+=a[i];
        }
    }
    int tmp=abs(A-B);
    cout<<tmp/100 + d[tmp%100/10] + d[tmp%10];
}
