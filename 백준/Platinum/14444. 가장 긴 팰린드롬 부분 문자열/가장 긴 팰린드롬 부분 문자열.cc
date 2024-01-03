#include<bits/stdc++.h>
using namespace std;
int n, r, k;
int p1[100010], p2[200020];
int max1, max1i, max2, max2i;
int main()
{
	string s1, s2;
	cin>>s1;
	//odd
	n=s1.size(),r=-1,k=-1;
    for(int i=0;i<n;i++) 
	{
		if(i<=r)
		{
			p1[i]=min(r-i, p1[2*k-i]);
		}
		while(i-p1[i]-1>=0&&i+p1[i]+1<n&&s1[i-p1[i]-1]==s1[i+p1[i]+1])
		{
			p1[i]++;
		}
		if(r<i+p1[i])
		{
			r=i+p1[i];
			k=i;
		}
        if(max1<p1[i])
        {
        	max1=p1[i];
        	max1i=i;
		}
    }
    //even
    if(n>=2)
    {
    	s2=" ";
    	for(int i=0;i<n;i++)
	    {
	    	s2+=s1[i];
	    	s2+=" ";
		}
		
		n=s2.size(),r=-1,k=-1;
	    for(int i=0;i<n;i++) 
		{
			if(i<=r)
			{
				p2[i]=min(r-i, p2[2*k-i]);
			}
			while(i-p2[i]-1>=0&&i+p2[i]+1<n&&s2[i-p2[i]-1]==s2[i+p2[i]+1])
			{
				p2[i]++;
			}
			if(r<i+p2[i])
			{
				r=i+p2[i];
				k=i;
			}
	        if(max2<p2[i]&&s2[i]==' ')
	        {
	        	max2=p2[i];
	        	max2i=i;
			}
	    }
	}
	//printf("%d %d\n", max1, max2);
	if(max1>=max2/2)
	{
        cout<<max1*2+1;
	}
	else
	{
		cout<<max2;
	}
    
}