#include<bits/stdc++.h>
using namespace std;
short a[7];
int main(){
    int s=0;
    for(int i=0;i<64;i++){
        a[0]++;
        s=0;
        for(int j=0;j<6;j++){
            if(a[j]>1){
                a[j]%=2;
                a[j+1]++;
            }
            if(a[j]==1){
                s++;
            }
        }
        if(s%2==1){
            for(int j=5;j>=0;j--){
                cout<<a[j];
            }
            cout<<endl;
        }
    }
    return 0;
}