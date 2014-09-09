#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
const int dis=100000000;
long long sum[1000005];
int b[12],n=1;
long long ans=0;
set<long long> a;

bool isPalindromic(int x){
	int i,j;
	for(i=1;x;i++){
		b[i]=x%10;
		x/=10;
	}
	for(j=1;j<i;j++){
		if(b[j]!=b[i-j])
			return 0;
	}
	return  1;
}

int main(){
	int i,j;
	sum[1]=1;
	while(1){
		n++;
		sum[n]=sum[n-1]+n*n;
		if(sum[n]-sum[n-1]>dis)
			break;
	}
	for(i=1;i<=n;i++){
		for(j=0;j<i-1;j++){
			if(sum[i]-sum[j]<dis && isPalindromic(sum[i]-sum[j]))
				a.insert(sum[i]-sum[j]);
		}
	}
	for(auto it=a.begin();it!=a.end();++it)
		ans+=*it;
	cout<<ans<<endl;
}