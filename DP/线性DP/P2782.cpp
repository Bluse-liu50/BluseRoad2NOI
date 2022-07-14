#include<bits/stdc++.h>
using namespace std;
const int maxn=200050,maxx=1000050;
int lis[maxn],ans=0,n;
struct rd{
    int s,n;
}x[maxn];
bool cmp(rd x,rd y){
    return x.n<y.n;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>x[i].s>>x[i].n;
    sort(x,x+n,cmp);
    for(int i=0;i<n;i++)
    {
        if(x[i].s>lis[ans])
        {
            lis[++ans]=x[i].s;
        }
        else
        {
            *lower_bound(lis+1,lis+ans+1,x[i].s)= (x[i].s);
        }
    }
    cout<<ans;
}