#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int dp[1000];
int main()
{
 
    int n;
    cin >> n;
    for (int i = 0; i<n; i++) cin >> arr[i];
    for (int i = 0; i<n; i++)
	{
        dp[i] = 1;
        for (int j = 0; j<i; j++) 
		{
            if (arr[j] < arr[i] && dp[j] >= dp[i]) 
			{
                dp[i] = dp[j] + 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i<n; i++) 
	{
        if (ans < dp[i]) ans = dp[i];
    }
    cout << ans << '\n';
    return 0;
}