#include<bits/stdc++.h>
using namespace std;
char x[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
stack<char> z;
int main(){
    long n,p;
    cin>>n>>p;
    if(n==0) z.push('0');
    while(n!=0){
        z.push(x[n%p]);
        n/=p;
    }
    while(!z.empty()){
        cout<<z.top();
        z.pop();
    }
}