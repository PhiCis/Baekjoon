#include<stdio.h>  
#include<string.h>  
char a[111], stack[111];  
int len, pointer, i;  
int main()  
{  
    scanf("%s", a);  
    len=strlen(a);  
    for(i=0;i<len;i++){  
        if(a[i]=='+'||a[i]=='-'){  
            while((stack[pointer-1]=='*'||stack[pointer-1]=='/'||stack[pointer-1]=='+'||stack[pointer-1]=='-')&&pointer>0){  
                printf("%c", stack[pointer-1]);  
                stack[pointer-1]=0;  
                pointer--;  
            }  
            stack[pointer]=a[i];  
            pointer++;  
        }  
        else if(a[i]=='*'||a[i]=='/'){  
            while((stack[pointer-1]=='*'||stack[pointer-1]=='/')&&pointer>0){  
                printf("%c", stack[pointer-1]);  
                stack[pointer-1]=0;  
                pointer--;  
            }  
            stack[pointer]=a[i];  
            pointer++;  
        }  
        else if(a[i]=='('){  
            stack[pointer]=a[i];  
            pointer++;  
        }  
        else if(a[i]==')'){  
            while(stack[pointer-1]!='('){  
                printf("%c", stack[pointer-1]);  
                stack[pointer-1]=0;  
                pointer--;  
            }  
            stack[pointer-1]=0;  
            pointer--;  
        }   
        else printf("%c", a[i]);  
    }  
    while(pointer>0){  
        printf("%c", stack[pointer-1]);  
        stack[pointer-1]=0;  
        pointer--;  
    }  
    return 0;  
}  