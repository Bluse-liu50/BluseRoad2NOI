#include<bits/stdc++.h>
using namespace std;
const int maxn=100005,maxx=105;
int dog[maxx],n,sum,temp1,temp2,x;
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
	cin>>n;
	for(int i=0;i<105;i++) dog[i]=999999999;
	for(int i=0;i<n;i++){
		temp1=read();
		temp2=read();
		if(dog[temp1]==999999999){
			dog[temp1]=temp2;
		}
		else if(dog[temp1]!=temp2){
			sum++;
			dog[temp1]=temp2;
		}
	}
	cout<<sum;
	return 0;
}