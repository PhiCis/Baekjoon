#include<stdio.h>
#include<string.h>
typedef long long ll;

struct stack{
	ll pnt;
	char data[110];
	stack()
	{
		pnt = 0;
	}
	void push(ll c)
	{
		data[++pnt]=c;
	}
	bool empty()
	{
		return pnt==0?true:false;
	}
	void pop()
	{
		pnt--;
	}
	ll top()
	{
		return data[pnt];
	}
	ll size()
	{
		return pnt;
	}
};
ll len;

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        char a[110]={0};
        stack s;
	    scanf("%s", a);
    	len = strlen(a);
    	for(int i=0;i<len;i++)
    	{
		    if(a[i]=='(')
		    {
		    	s.push(a[i]);
		    }
	    	else
	    	{
	    		if(s.empty())
    			{
	    			printf("NO\n");
		    		goto skip;
			    }
		    	else
		    	{
		       		s.pop();
	            }
	    	}
    	}
	    if(s.empty()) printf("YES\n");
	    else printf("NO\n");
        skip:;
    }
	
}