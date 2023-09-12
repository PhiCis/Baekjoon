#include<iostream>
#include<algorithm>
using namespace std;
int n;
int arr[10010];
int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
    	scanf("%d", &arr[i]);
	}
    if (next_permutation(arr, arr+n)==1)
    {
    	for(int i=0;i<n;i++)
    	{
    		printf("%d ", arr[i]);
		}   
    }
    else
    {
        printf("-1");
    }
    
}