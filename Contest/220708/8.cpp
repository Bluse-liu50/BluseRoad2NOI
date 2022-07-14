#include<bits/stdc++.h>
using namespace std;
short a[1000],sum;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i]*a[i];
    }
    sort(a,a+n);
    cout<<a[n-2]<<endl<<a[1]<<endl<<sum;
    return 0;
}