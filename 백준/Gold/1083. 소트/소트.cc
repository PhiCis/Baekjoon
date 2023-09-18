#include<bits/stdc++.h>
using namespace std;

int n, a[100], s;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>s;
    for(int i=1;i<=n;i++)
    {
        int cnt=i+1;
        int m=a[i], mi=i;
        while(cnt<=n && s>=cnt-i)
        {
            if(m<a[cnt])
            {
                m=a[cnt];
                mi=cnt;
            }
            cnt++;
        }
        s-=mi-i;
        int tmp=a[mi];
        for(int j=mi;j>i;j--)
        {
            a[j]=a[j-1];
        }
        a[i]=tmp;
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    
}
