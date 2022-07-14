#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char t;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int a=1;a<=n-i;a++) cout<<' ';
        for(int b=1;b<=i-1;b++){
            t='A'+i-b;
            cout<<t;
        }
        for(int c=1;c<=i;c++){
            t='A'-1+c;
            cout<<t;
        }
        cout<<endl;
    }
}