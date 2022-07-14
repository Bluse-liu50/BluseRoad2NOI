#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans[n][n];
    memset(ans,0,sizeof(ans));
    int x=0,y=n-1,num=1;
    ans[x][y]=num;
    for(int i=0;i<n*n-1;i++)
    {
    	cout<<"ans["<<x<<"]["<<y<<"]="<<ans[x][y]<<endl;
        if(i==0)ans[x][--y]=++num;
        else if(x==0&&y==0&&n%2==1)ans[++x][y]=++num;
        else if(x==n-1&&y==n-1&&n%2==0)ans[x][--y]=++num;
        else if(x==0&&(n-y)%2==0)ans[++x][++y]=++num;
        else if(x==0)ans[x][--y]=++num;
        else if(y==n-1&&x%2==0)ans[--x][--y]=++num;
        else if(y==n-1)ans[++x][y]=++num;
        else if(y==0&&(n-x)%2==0)ans[++x][++y]=++num;
        else if(y==0)ans[++x][y]=++num;
        else if(x==n-1&&y%2==0)ans[--x][--y]=++num;
        else if(x==n-1)ans[x][--y]=++num;
        else if(abs(x+y-n)%2==1)ans[--x][--y]=++num;
        else ans[++x][++y]=++num;
    }
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%5d",ans[i][j]);
		}
		cout<<endl;
	}
    return 0;
}