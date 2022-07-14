#include<bits/stdc++.h>
using namespace std;
struct C
{
    int num,chi,ma,eng;
}a[400];
bool cmp(C x,C y){
    if(x.chi+x.ma+x.eng!=y.chi+y.eng+y.ma) return x.chi+x.ma+x.eng>y.chi+y.eng+y.ma;
    else if(x.chi!=y.chi) return x.chi>y.chi;
    return x.num>y.chi;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i].num=i;
        cin>>a[i].chi>>a[i].ma>>a[i].eng;
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=5;i++){
        cout<<a[i].num<<' '<<a[i].chi+a[i].ma+a[i].eng<<endl;
    }
}