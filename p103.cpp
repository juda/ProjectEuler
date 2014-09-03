#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define FOR(i,j,k) for(i=j;i<=k;++i)
const int mm=50;
int a[10],n,ans=0x7fffffff;
int q[1000];
string out="";

string toString(int x){
	string st="";
	while(x){
		st=(char)(x%10+'0')+st;
		x/=10;
	}
	return st;
}

bool noConflict(int n){
	int i,temp,j;
	for(i=0;i<(1<<n);++i){
		temp=0;
		for(j=0;j<n;++j){
			if((i>>j)&1){
				temp+=a[j+1];
			}
		}
		q[i]=temp;
	}
	sort(q,q+(1<<n));
	return unique(q,q+(1<<n))==q+(1<<n);
}

void dfs(int ii){
	int res,i,flag,t1,t2,j;
	string st;
	if(ii>n){
		res=0;
		st="";
		FOR(i,1,n){
			res+=a[i];
			st+=toString(a[i]);
		}
		if(res<ans){
			ans=res;
			out=st;
		}
	}else{
		FOR(i,a[ii-1]+1,mm){
			a[ii]=i;
			t1=a[1];
			t2=0;
			flag=1;
			for(j=1;j<=(ii-1)/2;j++){
				t1+=a[j+1];
				t2+=a[ii-j+1];
				if(t1<=t2){
					flag=0;
					break;
				}
			}
			if(!flag)break;
			if(noConflict(ii)){
				dfs(ii+1);
			}
		}
	}
}

int main(){
	cin>>n;
	dfs(1);
	cout<<ans<<endl;
	cout<<out<<endl;
}