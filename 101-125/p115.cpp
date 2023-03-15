#include <iostream>
#include <cstring>
using namespace std;
#define FOR(i,j,k) for(i=j;i<=k;++i)
long long f[100000];

bool work(int n,int m=50){
	memset(f,0,sizeof f);
	int i,j;
	f[0]=1;
	long long ans=1;
	FOR(i,1,n+1){
		FOR(j,0,i-m-1){
			f[i]+=f[j]*(i-j-m);
		}
		ans+=f[i];
	}
	return ans>1000000;
}

int main(){
	int i=50;
	while(1){
		if(work(++i)){
			cout<<i<<endl;
			break;
		}
	}
}