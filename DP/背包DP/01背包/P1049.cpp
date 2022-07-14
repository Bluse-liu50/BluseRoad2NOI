#include<bits/stdc++.h>
using namespace std;
int v,n,s[40],dp[20030];
int main(){
    cin>>v>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=v;j>=s[i];j--){
            dp[j]=max(dp[j],dp[j-w[i]]+s[i]);
        }
    }
    cout<<v-dp[v];
}
