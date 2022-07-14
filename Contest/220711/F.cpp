#include <bits/stdc++.h>
using namespace std;
int cpt[105];
int find(int x)
{
    if(cpt[x]!=x)return cpt[x]=find(cpt[x]);
    return cpt[x];
}
void unionn(int x,int y)
{
    x=find(x);
    y=find(y);
    if(x!=y)cpt[y]=x;
}
struct cst
{
    int i,j,cost;
};
bool cmp(struct cst a,struct cst b)
{
    return a.cost<b.cost;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<105;i++)
    {
    	cpt[i]=i;
	}
    struct cst t[n*n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>t[i*n+j].cost;
            t[i*n+j].i=i;
            t[i*n+j].j=j;
        }
    }
    sort(t,t+n*n,cmp);
    int fl=1,ans=0;
    for(int ii=0;ii<n*n&&fl<n;ii++)
    {
    	if(t[ii].i==t[ii].j)continue;
        if(find(t[ii].i)!=find(t[ii].j))
        {
            unionn(t[ii].i,t[ii].j);
            cout<<t[ii].i<<" "<<t[ii].j<<endl;
            ans+=t[ii].cost;
            fl++;
        }
        else continue;
    }
    cout<<ans;
    return 0;
}