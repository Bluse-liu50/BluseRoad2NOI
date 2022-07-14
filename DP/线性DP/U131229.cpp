#include<bits/stdc++.h>
using namespace std;
const int maxn=10000000;
long n,b[maxn],dp[maxn],ans=-1;
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) dp[i]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(b[j]<b[i]) dp[i]=max(dp[i],dp[j]+1);
            ans=max(dp[i],ans);
        }
    }
    cout<<ans;
    return 0;
}