#include<bits/stdc++.h>
using namespace std;
const int maxn=12000,INF=300;
int n,m[maxn][maxn],dis[maxn];
int main(){
    cin>>n;
    memset(dis,INF,maxn);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>m[i][j];
        }
    }
    dis[1]=0;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(m[i][j]!=0){
                dis[i]=min(dis[i],dis[j]+m[i][j]);
            }
        }
    }
    cout<<dis[n];
}