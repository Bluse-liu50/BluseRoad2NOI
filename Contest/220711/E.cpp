#include<bits/stdc++.h>
using namespace std;
char a[10000000],did[10000000];
int main(){    
    int t,n,end=0;
    char d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d;
        if(d=='T'){
            cin>>d;
            a[++end]=d;
            did[i]='T';
        }
        else if(d=='U'){
            cin>>t;
            for(int j=i-1;j>=i-t-1;j--){
                if(did[j]=='T') end--;
            }
        }
        else if(d=='Q'){
            cin>>t;
            cout<<a[t]<<endl;
        }
    }
}