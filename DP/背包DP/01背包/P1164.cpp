#include<bits/stdc++.h>
using namespace std;
int n,m,a[1050],f[10030];
int main(){
    f[0]=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        for(int j=m;j>=a[i];--j){
            f[j]+=f[j-a[i]];
        }
    }
    cout<<f[m];
}