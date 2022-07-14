#include<bits/stdc++.h>
using namespace std;
const int maxn=120;
int d1[maxn],d2[maxn],t[maxn],n,ans;
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>t[i];
    for(int i=0;i<n;i++) d1[i]=d2[i]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(t[i]>t[j]) d1[i]=max(d1[i],d1[j]+1);
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=i+1;j<=n;j++){
            if(t[i]>t[j]) d2[i]=max(d2[i],d2[j]+1);
        }
    }
    for(int i=0;i<n;i++){
        ans=max(ans,d1[i]+d2[i]);
    }
    cout<<n-ans+1;
}