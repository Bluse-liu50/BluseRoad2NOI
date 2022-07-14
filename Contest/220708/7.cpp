#include<bits/stdc++.h>
using namespace std;
long long sum,maxs,mins,n,t;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        maxs=max(maxs,t);
        mins=min(mins,t);
        sum+=t;
    }
    cout<<maxs<<endl<<mins<<endl<<sum<<endl;
    return 0;
}