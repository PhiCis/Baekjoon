#include <stdio.h>
int main(void){
  int n,m,s,s2=-1,ans;
  scanf("%d %d",&n,&m);
  int num[n];
  for(int i=0;i<n;i++)
    scanf("%d",&num[i]);
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      for(int k=j+1;k<n;k++){
        s=num[i]+num[j]+num[k];
        if(s==m){
          ans=s;
          goto skip;
          }
        else if(s<m && s>s2){
          ans=s;
          s2=s;
          }
        }
        }
      }
    skip:;
        printf("%d",ans);
  }