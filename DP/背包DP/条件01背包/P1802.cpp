#include<bits/stdc++.h>
using namespace std;
const int maxn=1005,maxx=1005;
long long x,n,lose[maxn],win[maxn],use[maxn],dp[maxn];
int main(){
    cin>>n>>x;
    for(int i=1;i<=n;i++) cin>>lose[i]>>win[i]>>use[i];
    for(int i=1;i<=n;i++){
        for(int j=x;j>=0;j--){
            if(j>=use[i]) dp[j]=max(dp[j]+lose[i],dp[j-use[i]]+win[i]);
            else dp[j]=dp[j-use[i]]+win[i];
        }
    }
    cout<<dp[x];
}