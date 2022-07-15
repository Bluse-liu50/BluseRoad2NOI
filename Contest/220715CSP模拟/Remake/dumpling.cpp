#include<bits/stdc++.h>
using namespace std;
const int maxn=100050,maxx=10005;
int n,dp[maxn],a[maxn],ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i]=a[i];
	}
	for(int i=1;i<=n;i++){
			int sum=a[i+1];
			for(int j=i+1;j<=n;j++){
				dp[j]=max(dp[j],dp[i]+sum);
				sum+=a[j+1];
				ans=max(ans,dp[j]);
			}
		}
	cout<<ans;
	return 0;
}