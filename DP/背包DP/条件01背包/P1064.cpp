#include<bits/stdc++.h>
using namespace std;
const int maxn=320000,maxm=650;
int n,m,v[maxm][5],p[maxm][5],dp[maxn];
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int vi,pi,qi;
        cin>>vi>>pi>>qi;
        if(qi==0){
            v[i][0]=vi;
            p[i][0]=pi;
        }
        else{
            if(p[qi][1]==0){
                v[qi][1]=vi;
                p[qi][1]=pi;
            }
            else{
                v[qi][2]=vi;
                p[qi][2]=pi;
            }
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=n;j>=0;j--){
            if(j>=v[i][0]){
                dp[j]=max(dp[j],dp[j-v[i][0]]+v[i][0]*p[i][0]);
            }
            if(j>=v[i][0]+v[i][1]){
                dp[j]=max(dp[j],dp[j-v[i][0]-v[i][1]]+v[i][0]*p[i][0]+v[i][1]*p[i][1]);
            }
            if(j>=v[i][0]+v[i][2]){
                dp[j]=max(dp[j],dp[j-v[i][0]-v[i][2]]+v[i][0]*p[i][0]+v[i][2]*p[i][2]);
            }
            if(j>=v[i][0]+v[i][1]+v[i][2]){
                dp[j]=max(dp[j],dp[j-v[i][0]-v[i][1]-v[i][2]]+v[i][0]*p[i][0]+v[i][1]*p[i][1]+v[i][2]*p[i][2]);
            }
        }
    }
    cout<<dp[n];
    return 0;
}