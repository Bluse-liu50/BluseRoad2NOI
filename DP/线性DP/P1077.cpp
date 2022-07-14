#include <bits/stdc++.h>
using namespace std;
int dp[200][200];
int main()
{
    int n,m;
    cin>>n>>m;
    int knd[n];
    for(int i=0;i<n;i++)
    {
        cin>>knd[i];
    }
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            for(int k=0;k<=min(j,knd[i-1]);k++)
            {
                dp[i][j]=(dp[i][j]+dp[i-1][j-k])%1000007;
            }
        }
    }
    cout<<dp[n][m];
    return 0;
}
