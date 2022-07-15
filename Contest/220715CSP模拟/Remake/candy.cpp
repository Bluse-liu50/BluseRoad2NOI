#include<bits/stdc++.h>
using namespace std;
const int maxn=1000005,maxm=1000005,maxk=1000005;
long long x,m,n,a[maxm],l,r,k;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&l,&r,&k);
		a[l]+=k;
        a[r+1]-=k;
	}
    cout<<a[1]<<endl;
	for(int i=2;i<=m;++i){
        a[i]+=a[i-1];
        cout<<a[i]<<endl;
    }
	return 0;
}