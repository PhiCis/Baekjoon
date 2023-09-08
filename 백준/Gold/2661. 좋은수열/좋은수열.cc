#include<stdio.h>  
int n, flag, a[100];  
int good(int chk){  
    for(int j=1;j<=chk/2;j++){  
        for(int k=1;k<=j;k++){  
            if(a[chk-j+k]!=a[chk-2*j+k]) goto skip;  
        }  
        return 0;  
        skip:;  
    }  
    return 1;  
}  
void f(int n, int chk){  
    if(flag) return;  
    if(chk==n){  
        for(int i=1;i<=n;i++) printf("%d", a[i]);  
        flag++;  
        return;  
    }  
    chk++;  
    for(int i=1;i<=3;i++){  
        a[chk]=i;  
        if(good(chk)) f(n, chk);  
        if(flag) return;  
    }  
    chk--;  
}  
int main()  
{  
    scanf("%d", &n);  
    f(n, 0);  
}