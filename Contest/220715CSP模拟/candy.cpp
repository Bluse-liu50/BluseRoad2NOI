#include<bits/stdc++.h>
using namespace std;
const int maxn=1000005,maxm=1000005,maxk=1000005;
long long x,a[maxm],l,r,k;
inline int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    return x*f;
}
int main(){
	int n=read(),m=read();
	for(int i=0;i<n;i++){
		l=read();
		r=read();
		k=read();
		for(;l<=r;l++){
			a[l]+=k;
		}
	}
	for(int i=1;i<=m;++i) printf("%ld\n",a[i]);
	return 0;
}