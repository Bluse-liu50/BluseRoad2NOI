#include<bits/stdc++.h>
using namespace std;
int w[]={1,2,3,5,10,20},a[7],dp[1005],sum;
int main(){
    for(int i=0;i<6;i++) cin>>a[i];
    f[0]=1;
    for(int i=0;i<6;i++){
        for(int j=1;<a[i];j++){
            for(int k=1000;k>=0;k--){
                if(dp[k]) dp[k+w[i]]=1;
            }
        }
    }
    for(int i=0;i<1001;i++){
        if(dp[i]) sum++;
    }
    cout<<sum;
}