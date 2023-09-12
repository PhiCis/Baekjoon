#include<bits/stdc++.h>
using namespace std;

char a[110];
int ans;

int main()
{
    scanf("%s", a);
    char* ptr=strtok(a, ",");
    while(ptr!=NULL)
	{
        ans+=atoi(ptr);
        ptr=strtok(NULL, ",");
    }
    printf("%d\n", ans);
    return 0;
}