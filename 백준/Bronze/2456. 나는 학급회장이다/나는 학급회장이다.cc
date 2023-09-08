#include<stdio.h>  
int n, a, b, c, i, x[5], x1[5], x2[5], x3[5];  
int main()  
{  
    scanf("%d", &n);  
    for(i=0;i<n;i++){  
        scanf("%d%d%d", &a, &b, &c);  
        x[1]+=a;  
        x[2]+=b;  
        x[3]+=c;  
        x1[a]++;  
        x2[b]++;  
        x3[c]++;  
    }  
    if(x[1]>x[2]&&x[1]>x[3]) printf("1 %d", x[1]);  
    else if(x[2]>x[1]&&x[2]>x[3]) printf("2 %d", x[2]);  
    else if(x[3]>x[2]&&x[3]>x[1]) printf("3 %d", x[3]);  
    else if(x[1]==x[2]&&x[2]>x[3]){  
        if(x1[3]>x2[3]) printf("1 %d", x[1]);  
        else if(x1[3]<x2[3]) printf("2 %d", x[2]);  
        else{  
            if(x1[2]>x2[2]) printf("1 %d", x[1]);  
            else if(x1[2]<x2[2]) printf("2 %d", x[2]);  
            else printf("0 %d", x[1]);  
        }  
    }  
    else if(x[2]==x[3]&&x[3]>x[1]){  
        if(x2[3]>x3[3]) printf("2 %d", x[2]);  
        else if(x2[3]<x3[3]) printf("3 %d", x[3]);  
        else{  
            if(x2[2]>x3[2]) printf("2 %d", x[2]);  
            else if(x2[2]<x3[2]) printf("3 %d", x[3]);  
            else printf("0 %d", x[2]);  
        }  
    }  
    else if(x[3]==x[1]&&x[1]>x[2]){  
        if(x3[3]>x1[3]) printf("3 %d", x[3]);  
        else if(x3[3]<x1[3]) printf("1 %d", x[1]);  
        else{  
            if(x3[2]>x1[2]) printf("3 %d", x[3]);  
            else if(x3[2]<x1[2]) printf("1 %d", x[1]);  
            else printf("0 %d", x[3]);  
        }  
    }  
    else{  
        if(x1[3]>x2[3]&&x1[3]>x3[3]) printf("1 %d", x[1]);  
        else if(x2[3]>x1[3]&&x2[3]>x3[3]) printf("2 %d", x[2]);  
        else if(x3[3]>x2[3]&&x3[3]>x1[3]) printf("3 %d", x[3]);  
        else if(x1[3]==x2[3]&&x2[3]>x3[3]){  
            if(x1[2]>x2[2]) printf("1 %d", x[1]);  
            else if(x1[2]<x2[2]) printf("2 %d", x[2]);  
            else printf("0 %d", x[1]);  
        }  
        else if(x2[3]==x3[3]&&x3[3]>x1[3]){  
            if(x2[2]>x3[2]) printf("2 %d", x[2]);  
            else if(x2[2]<x3[2]) printf("3 %d", x[3]);  
            else printf("0 %d", x[2]);  
        }  
        else if(x3[3]==x1[3]&&x1[3]>x2[3]){  
            if(x3[2]>x1[2]) printf("3 %d", x[3]);  
            else if(x3[2]<x1[2]) printf("1 %d", x[1]);  
            else printf("0 %d", x[3]);  
        }  
        else printf("0 %d", x[1]);  
    }  
}  