#include <iostream>
using namespace std;
#define FOR(i,j,k) for(i=j;i<=k;++i)
#define FORD(i,j,k) for(i=j;i>=k;--i)
int ans=0,n,mm;
int a[100];

void dfs(int level){
	if(level>=mm)
		return;
	if(a[level]==n){
		mm=min(mm,level);
	}
	int i;
	FORD(i,level,1){
		if(a[level]+a[i]<=n){
			a[level+1]=a[level]+a[i];
			dfs(level+1);
		}
	}
}

int main(){
	a[1]=1;
	FOR(n,2,200){
		mm=200;
		dfs(1);
		ans+=mm-1;
	}
	cout<<ans<<endl;
}