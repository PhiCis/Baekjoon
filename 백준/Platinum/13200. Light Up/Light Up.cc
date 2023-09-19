#include<bits/stdc++.h>
using namespace std;

int t, n;
int a[10][10];
int c[10][10]; //located
int d[4][2]={1, 0, 0, 1, -1, 0, 0, -1};
bool flag;

bool check()
{
    return false;
}

void f(int k)
{
    if(k==n*n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(c[i][j]==-100) return;
                if(a[i][j]>=0)
                {
                    int tmp=0;
                    for(int k=0;k<4;k++)
                    {
                        if(0<=i+d[k][0]&&i+d[k][0]<n&&0<=j+d[k][1]&&j+d[k][1]<n&&c[i+d[k][0]][j+d[k][1]]==1)
                        {
                            tmp++;
                        }
                    }
                    if(tmp!=a[i][j]) return;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<(c[i][j]==1)<<" ";
            }
            cout<<"\n";
        }
        flag=true;
        return;
    }
    int tmp=k;
    while(tmp<n*n&&c[tmp/n][tmp%n]!=0) tmp++;
    if(tmp==n*n) f(tmp);
    else
    {
        c[tmp/n][tmp%n]=-100;
        f(tmp+1);
        if(flag) return;
        c[tmp/n][tmp%n]=1;
        for(int l=0;l<4;l++)
        {
            int cnt=1;
            while(0<=tmp/n+cnt*d[l][0]&&tmp/n+cnt*d[l][0]<n&&0<=tmp%n+cnt*d[l][1]&&tmp%n+cnt*d[l][1]<n&&a[tmp/n+cnt*d[l][0]][tmp%n+cnt*d[l][1]]==-2)
            {
                c[tmp/n+cnt*d[l][0]][tmp%n+cnt*d[l][1]]--;
                cnt++;
            }
        }
        f(tmp+1);
        if(flag) return;
        for(int l=0;l<4;l++)
        {
            int cnt=1;
            while(0<=tmp/n+cnt*d[l][0]&&tmp/n+cnt*d[l][0]<n&&0<=tmp%n+cnt*d[l][1]&&tmp%n+cnt*d[l][1]<n&&a[tmp/n+cnt*d[l][0]][tmp%n+cnt*d[l][1]]==-2)
            {
                c[tmp/n+cnt*d[l][0]][tmp%n+cnt*d[l][1]]++;
                cnt++;
            }
        }
        c[tmp/n][tmp%n]=0;
    }
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]!=-2) //not blank
                {
                    c[i][j]=-1; //no light
                }
                else
                {
                    c[i][j]=0; //whether
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==0) //
                {
                    for(int k=0;k<4;k++)
                    {
                        if(0<=i+d[k][0]&&i+d[k][0]<n&&0<=j+d[k][1]&&j+d[k][1]<n)
                        {
                            c[i+d[k][0]][j+d[k][1]]=-1;
                        }
                    }
                }
                if(a[i][j]==4)
                {
                    for(int k=0;k<4;k++)
                    {
                        if(0<=i+d[k][0]&&i+d[k][0]<n&&0<=j+d[k][1]&&j+d[k][1]<n)
                        {
                            c[i+d[k][0]][j+d[k][1]]=1;
                            for(int l=0;l<4;l++)
                            {
                                int cnt=1;
                                while(0<=i+d[k][0]+cnt*d[l][0]&&i+d[k][0]+cnt*d[l][0]<n&&0<=j+d[k][1]+cnt*d[l][1]&&j+d[k][1]+cnt*d[l][1]<n&&a[i+d[k][0]+cnt*d[l][0]][j+d[k][1]+cnt*d[l][1]]==-2)
                                {
                                    c[i+d[k][0]+cnt*d[l][0]][j+d[k][1]+cnt*d[l][1]]=-1;
                                    cnt++;
                                }
                            }
                        }
                    }
                }
                if(a[i][j]==3 &&((i==0)+(i==n-1)+(j==0)+(j==n-1)>=1))
                {
                    for(int k=0;k<4;k++)
                    {
                        if(0<=i+d[k][0]&&i+d[k][0]<n&&0<=j+d[k][1]&&j+d[k][1]<n)
                        {
                            c[i+d[k][0]][j+d[k][1]]=1;
                            for(int l=0;l<4;l++)
                            {
                                int cnt=1;
                                while(0<=i+d[k][0]+cnt*d[l][0]&&i+d[k][0]+cnt*d[l][0]<n&&0<=j+d[k][1]+cnt*d[l][1]&&j+d[k][1]+cnt*d[l][1]<n&&a[i+d[k][0]+cnt*d[l][0]][j+d[k][1]+cnt*d[l][1]]==-2)
                                {
                                    c[i+d[k][0]+cnt*d[l][0]][j+d[k][1]+cnt*d[l][1]]=-1;
                                    cnt++;
                                }
                            }
                        }
                    }
                }
                if(a[i][j]==2 &&((i==0)+(i==n-1)+(j==0)+(j==n-1)>=2))
                {
                    for(int k=0;k<4;k++)
                    {
                        if(0<=i+d[k][0]&&i+d[k][0]<n&&0<=j+d[k][1]&&j+d[k][1]<n)
                        {
                            c[i+d[k][0]][j+d[k][1]]=1;
                            for(int l=0;l<4;l++)
                            {
                                int cnt=1;
                                while(0<=i+d[k][0]+cnt*d[l][0]&&i+d[k][0]+cnt*d[l][0]<n&&0<=j+d[k][1]+cnt*d[l][1]&&j+d[k][1]+cnt*d[l][1]<n&&a[i+d[k][0]+cnt*d[l][0]][j+d[k][1]+cnt*d[l][1]]==-2)
                                {
                                    c[i+d[k][0]+cnt*d[l][0]][j+d[k][1]+cnt*d[l][1]]=-1;
                                    cnt++;
                                }
                            }
                        }
                    }
                }
            }
        }
        flag=false;
        f(0);
    }
}
