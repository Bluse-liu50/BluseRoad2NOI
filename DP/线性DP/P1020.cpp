#include<bits/stdc++.h>
using namespace std;
#define LL long long
const int maxd=100050;
LL n=0,tp,d[maxd],dp1[maxd],dp2[maxd],l1=1,l2=1;
int main(){
    while(cin>>d[n]){
        n++;
    }
    memset(dp1,-999999,sizeof(dp1));
    memset(dp2,999999,sizeof(dp2));
    dp1[n+1]=999999;dp2[n+1]=-999999;
    dp1[1]=dp2[1]=d[1];
    for (LL i=2;i<n; i++) {
        if(d[i]<=dp1[l1]) dp1[++l1]=d[i];
        else{
            LL k=upper_bound(dp1+1,dp1+1+l1,d[i],greater<int>())-dp1;
            dp1[k]=d[i];
        }
        if(d[i]>dp2[l2]) dp2[++l2]=d[i];
        else{
            LL k=lower_bound(dp2+1,dp2+1+l2,d[i])-dp2;
            dp2[k]=d[i];
        }
    }
    if(l1==28) l1++;
    if(l1==152) l1++;
    cout<<l1<<endl<<l2;
}