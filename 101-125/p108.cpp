#include <iostream>
using namespace std;
const int m=1000;//4e6;
#define FOR(i,j,k) for(i=j;i<=k;++i)


bool calc(int x){
	int i=x,res=0;
	while(1){
		++i;
		if((long long)x*i/(i-x)<i)
			break;
		if((long long)x*i%(i-x)==0){
			res++;
			if(res>=m)
				return 1;
		}
	}
	return 0;
}

int main(){
	int i=1000;
	while(1){
		if(calc(++i)){
			cout<<i<<endl;
			break;
		}
	}
}