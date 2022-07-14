#include <bits/stdc++.h>
using namespace std;
char x[]="0123456789ABCDEF";
stack<char> z;
int main(){
    long n;
    cin>>n;
    if(n==0) z.push('0');
    while(n!=0){
        z.push(x[n%16]);
        n/=16;
    }
    while(!z.empty()){
        cout<<z.top();
        z.pop();
    }
}