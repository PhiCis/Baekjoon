#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;


ll la[100010], lb[100010]; 
int lz[100010];
int st=0,pnt=1;

void update(ll a, ll b, int z)
{
    while(st>pnt)
	{
        if(a==la[st] && b>=lb[st]) st--;
        else if((lb[st]-b)*(la[st]-la[st-1])<(a-la[st])*(lb[st-1]-lb[st])) st--;
        else break;
    }
    if(a==la[st] && b>=lb[st] && z!=0) return;
    
    st++;
	la[st]=a;
    lb[st]=b;
    lz[st]=z;
}

pll query(ll x)
{
    while(pnt<st && (lb[pnt]-lb[pnt+1])<(la[pnt+1]-la[pnt])*x) pnt++;
    return make_pair(la[pnt]*x+lb[pnt],lz[pnt]);
}

ll a[100010],D[2][100010],S[100010];
int pre[202][100010];
 
int main()
{
    int n, k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
		S[i]=S[i-1]+a[i];
	}
	
    for(int i=1;i<=k;i++)
	{
    	st=0; pnt=1;
        update(0,0,0);
        for(int j=1;j<=n;j++)
		{
            pll tmp=query(S[j]);
            D[i%2][j]=tmp.first;
            pre[i][j]=tmp.second;
            update(S[j],D[(i-1)%2][j]-S[j]*S[j],j);
        }
    }
    
    printf("%lld\n",D[k%2][n]);
    int pointer=n;
    vector<int> ans;
    
    ans.push_back(-1);
    for(int i=1;i<=k;i++)
	{
        ans.push_back(pre[k-i+1][pointer]);
        pointer=pre[k-i+1][pointer];
    }
    sort(ans.begin(),ans.end());
    for(int i=1;i<=k;i++)
	{
        if(ans[i]==0) ans[i]=1;
        if(ans[i]<=ans[i-1]) ans[i]=ans[i-1]+1;
        printf("%d ",ans[i]);
    }
}