#include<bits/stdc++.h>
using namespace std;
const int maxt=5+1e8,maxm=1e5+5;
long long t,m,a[maxm],b[maxm];
long long dp[maxt];
int main(){
    cin>>t>>m;
    for(int i=1;i<=m;i++) cin>>a[i]>>b[i];
    for(int i=1;i<=m;i++){
        for(int j=a[i];j<=t;j++){
            dp[j]=max(dp[j-a[i]]+b[i],dp[j]);
        }
    cout<<dp[t];
    }
}