#include<bits/stdc++.h>
using namespace std;
char T[400040];
int n, cnt;
int sa[400020], pos[400020], lcp[400020], tmp[400020];
int ans;

bool cmp(int i, int j)
{
	if(pos[i]!=pos[j])
	{
		return pos[i]<pos[j];
	}
	i+=cnt, j+=cnt;
	return (i<n&&j<n)?(pos[i]<pos[j]):i>j;
}

int main()
{
	scanf("%d\n", &n);
	scanf("%s", T);
	
	for(int i=0;i<n;i++)
	{
		sa[i]=i;
		pos[i]=T[i];
	}
	for(cnt=1;;cnt<<=1)
	{
		sort(sa, sa+n, cmp);
		tmp[0]=0;
		for(int i=0;i<n-1;i++)
		{
			tmp[i+1]=tmp[i]+cmp(sa[i], sa[i+1]);
		}
		for(int i=0;i<n;i++)
		{
			pos[sa[i]]=tmp[i];
		}
		if(tmp[n-1]==n-1) break;
	}
	/*
	for(int i=0;i<n;i++)
	{
		printf("%d ", sa[i]);
	}
	*/
	int k=0;
	for(int i=0;i<n;i++)
	{
        if(pos[i]==n-1) continue;
        
        int j=sa[pos[i]+1];
        while(T[i+k]==T[j+k]) k++;
        lcp[pos[i]]=k;
        if(lcp[pos[i]]>ans)
        {
        	ans=lcp[pos[i]];
		}
        k=max(k-1, 0);
    }
    printf("%d", ans);
}