#include <iostream>
#include <cstring>
using namespace std;
#define FOR(i,j,k) for(i=j;i<=k;++i)
long long f[55][4];

int main(){
	int i,n=50,j,k;
	f[0][0]=1;
	FOR(i,1,n){
		FOR(j,0,3){
			FOR(k,0,3){
				if(i>=j+1)f[i][j]+=f[i-j-1][k];
			}
		}
	}
	cout<<f[n][0]+f[n][1]+f[n][2]+f[n][3]<<endl;
}