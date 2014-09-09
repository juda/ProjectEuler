#include <iostream>
using namespace std;
#define FOR(i,j,k) for(i=j;i<=k;++i)
double f[20][20];

int main(){
	int i,j,n;
	double ans=0;
	cin>>n;
	f[0][0]=1;
	FOR(i,1,n){
		FOR(j,0,i){
			if(j>=1)f[i][j]+=f[i-1][j-1]/(i+1.0);
			f[i][j]+=f[i-1][j]*i/(i+1.0);
		}
	}
	FOR(i,n/2+1,n)
		ans+=f[n][i];
	cout<<ans<<endl;
	cout<<(int)(1/ans)<<endl;
}