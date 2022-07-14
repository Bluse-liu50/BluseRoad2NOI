#include <bits/stdc++.h>
using namespace std;
const int maxm=155,maxn=450;
int c_score[maxn],temp,dp[50][50][50][50],c_num[20],n,m,now;
#define DP dp[a][b][c][d]
int main(){
    cin>>n>>m;
    for (int i=1; i<=n; i++) {
        cin>>c_score[i];
    }
    for (int i=1; i<=m; i++) {
        cin>>temp;
        c_num[temp]++;
    }
    dp[0][0][0][0]=c_score[1];
    for(int a=0;a<=c_num[1];a++){
        for (int b=0; b<=c_num[2]; b++) {
            for (int c=0; c<=c_num[3]; c++) {
                for (int d=0; d<=c_num[4]; d++) {
                    now=a+2*b+3*c+4*d+1;
                    if(a!=0) DP=max(DP,dp[a-1][b][c][d]+c_score[now]);
                    if(b!=0) DP=max(DP,dp[a][b-1][c][d]+c_score[now]);
                    if(c!=0) DP=max(DP,dp[a][b][c-1][d]+c_score[now]);
                    if(d!=0) DP=max(DP,dp[a][b][c][d-1]+c_score[now]);
                }
            }
        }
    }
    cout<<dp[c_num[1]][c_num[2]][c_num[3]][c_num[4]];
    return 0;
}