#include <iostream>
#include <cstring>
using namespace std;
#define FOR(i,j,k) for(i=j;i<=k;++i)
long long f[55],g[55];
const int n=50;

long long calc(int m){
	memset(f,0,sizeof f);
	memset(g,0,sizeof g);
	f[0]=1;
	g[0]=1;
	int i;
	FOR(i,1,n){
		if(i>=m)f[i]+=g[i-m];
		g[i]=g[i-1]+f[i];
	}
	return g[n]-1;
}

int main(){
	cout<<calc(2)+calc(3)+calc(4)<<endl;
}