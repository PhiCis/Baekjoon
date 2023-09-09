#include <stdio.h>
int ch[30];
int main(){
	
    int n=0;
    int h=0, l=0;
    for(int i=0; i<28; i++){
        scanf("%d", &n);
        ch[n-1]=1;
    }
    
    for(int j=0; j<30; j++){
        if(ch[j]==0){
            if(h==0){
                h=j+1;
            }
            else
                l=j+1;
        }
    }
    
    printf("%d\n%d", h, l);
    
    return 0;
}