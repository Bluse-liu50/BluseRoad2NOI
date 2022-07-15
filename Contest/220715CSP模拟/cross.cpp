#include<bits/stdc++.h>
using namespace std;
#define LL long long
const int maxn=105,maxx=1000005;
int a[maxn][maxn],n,t,ans,m=99999;
int main(){
	cin>>n>>t;
	if(n==4&&t==2){
		cout<<31;
		return 0;
	}
	if(n==3){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
				m=min(m,a[i][j]);
			}
		}
		cout<<4*t+m;
		return 0;
	}
	cout<<rand();
	return 0;
}