#include<stdio.h>  
int main()  
{  
    long long n, k, l;  
    scanf("%lld", &n);  
    if(n%3==0){  
        k=(n+3)/6;  
        if(k%2==0) l=k*k*3/4;  
        else l=(3*k*k+1)/4;  
    }  
    if(n%3==1){  
        k=n/6;  
        if(k%2==0) l=(3*k*k+4*k)/4;  
        else l=(3*k*k+4*k+1)/4;  
    }  
    if(n%3==2){  
        k=(n+3)/6;  
        if(k%2==0) l=(3*k*k+2*k)/4;  
        else l=(3*k*k+2*k-1)/4;  
    }  
    printf("%lld", l);  
    return 0;  
}  