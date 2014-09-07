#include <iostream>
using namespace std;
#define FOR(i,j,k) for(i=j;i<=k;++i)
long long f[55];

int main(){
	int i,j,n=50;
	f[0]=1;
	long long ans=1;
	FOR(i,1,n+1){
		FOR(j,0,i-4){
			f[i]+=f[j]*(i-j-3);
		}
		ans+=f[i];
	}
	cout<<ans<<endl;
}