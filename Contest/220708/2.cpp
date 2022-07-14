#include<bits/stdc++.h>
using namespace std;
string a="ZYXWVUTSRQPONMLKJIHGFEDCBABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
    char z;
    for(int i=1;i<=25;i++){
        for(int j=0;j<18;j++){
            cout<<a[26-i+j];
        }
        cout<<endl;
    }
}