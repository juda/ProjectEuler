#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i,j,k) for(i=j;i<=k;++i)
const int n=100000;
bool mark[n+10];
int primes[n],tot;
pair<int, int> a[n+10];

void init(){
	for(int i=2;i<=n;i++){
		if(mark[i]==0)primes[++tot]=i;
		for(int j=1;j<=primes[tot] && primes[j]*i<=n;++j){
			mark[primes[j]*i]=1;
			if(i%primes[j]==0)break;
		}
	}
}

int calc(int x){
	int i,res=1;
	FOR(i,1,tot){
		if(x%primes[i]==0)
			res*=primes[i];
		if(primes[i]>x)
			break;
	}
	return res;
}

void work(){
	int i;
	FOR(i,1,n){
		a[i]=make_pair(calc(i),i);
	}
	sort(a+1,a+1+n);
	cout<<a[10000].second<<endl;
}

int main(){
	init();
	work();
}