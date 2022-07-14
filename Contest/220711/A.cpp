#include<bits/stdc++.h>
using namespace std;
int n,p[4],v[4],u[4];
int main(){
    cin>>n>>p[0]>>v[0]>>p[1]>>v[1]>>p[2]>>v[2];
    for (int i = 0; i < 3; i++)
    {
        if(n%p[i]!=0) u[i]=v[i]*(n/p[i]+1);
        else u[i]=v[i]*n/p[i];
    }
    sort(u,u+3);
    cout<<u[0];
    return 0;
}