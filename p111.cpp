#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define M 1000006
#define FOR(i,j,k) for(i=j;i<=k;++i)
bool isPrime[M];
vector<int> prime;
long long sum,ans=0;

int init(){
	int i,j;
	FOR(i,2,100000){
		if(!isPrime[i])prime.push_back(i);
		for(j=0;j<prime.size()&&prime[j]*i<=100000;j++){
			isPrime[prime[j]*i]=1;
			if(i%prime[j]==0)break;
		}
	}
}

bool isprime(long long x){
	for(int i=0;i<prime.size();++i){
		if(x%prime[i]==0)
			return 0;
	}
	return 1;
}

void dfs(long long now,int level,const int digit,int amount){
	if(level+amount-1>10)
		return;
	if(level==11){
		if(isprime(now)){
			//cout<<now<<endl;
			sum+=now;
		}
	}else{
		int i;
		FOR(i,0,9){
			if(i==0 && level==1)
				continue;
			if(i==digit)
				dfs(now*10+i,level+1,digit,amount-1);
			else
				dfs(now*10+i,level+1,digit,amount);
		}
	}
}

int main(){
	int i,j;
	init();
	FOR(i,0,9){
		for(j=9;j>0;j--){
			sum=0;
			dfs(0,1,i,j);
			if(sum){
				//cout<<"digit: "<<i<<" "<<sum<<endl;
				ans+=sum;
				break;
			}
		}
	}
	cout<<ans<<endl;
}