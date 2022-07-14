#include<bits/stdc++.h>
using namespace std;
int num[109][109],n;
int main(){
	num[1][1]=1;
	cin>>n;
	for(int i=1,j=1,tot=1;tot<n*n;){
		while(++j<=n&&!num[i][j])num[i][j]=++tot;--j;
		while(++i<=n&&!num[i][j])num[i][j]=++tot;--i;
		while(--j> 0&&!num[i][j])num[i][j]=++tot;++j;
		while(--i> 0&&!num[i][j])num[i][j]=++tot;++i;
	}
	for(int i=1;i<=n;++i,cout<<endl)for(int j=1;j<=n;++j)
	cout<<num[i][j]<<setw(4);
	return 0;
}
