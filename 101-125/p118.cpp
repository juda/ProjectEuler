#include <iostream>
#include <algorithm>
using namespace std;
int ans,a[11];

bool isPrime(int x){
	if(x==1)return 0;
	for(int i=2;i*i<=x;++i){
		if(x%i==0)
			return 0;
	}
	return 1;
}

void dfs(int level,int last,int now){
	if(level>9){
		if(now>last){
			if(isPrime(now))
				ans++;
		}
	}else{
		now=now*10+a[level];
		if(now>last && isPrime(now)){
			dfs(level+1,now,0);
		}
		dfs(level+1,last,now);
	}
}

int main(){
	for(int i=1;i<=9;i++)
		a[i]=i;
	do{
		dfs(1,0,0);
	}while(std::next_permutation(a+1,a+10));
	cout<<ans<<endl;
}