#include<bits/stdc++.h>
using namespace std;
string a="ZYXWVUTSRQPONMLKJIHGFEDCBABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
    char z;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            cout<<a[26-i+j];
        }
        cout<<endl;
    }
}