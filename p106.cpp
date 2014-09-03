#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i,j,k) for(i=j;i<=k;++i)
const int n=12,m=1<<n;
vector<int> d[n+1];

int main(){
	int i,weishu,j,k,t1,t2,flag,s1,s2,ans=0,l;
	FOR(i,0,m-1){
		weishu=0;
		for(j=0;j<n;j++){
			if((i>>j)&1){
				weishu++;
			}
		}
		d[weishu].push_back(i);
	}
	FOR(i,1,6){
		for(j=0;j<d[i].size();j++){
			for(k=j+1;k<d[i].size();k++){
				t1=d[i][j];
				t2=d[i][k];
				if((t1&t2)==0){
					if(t1>t2)swap(t1,t2);
					flag=0;
					FOR(l,1,i){
						s1=t1&(-t1);
						s2=t2&(-t2);
						if(s1>s2){
							flag=1;
							break;
						}
						t1-=s1;
						t2-=s2;
					}
					if(flag)ans++;
				}
			}
		}
	}
	cout<<ans<<endl;
}