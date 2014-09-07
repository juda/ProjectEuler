#include <iostream>
using namespace std;

bool isBouncy(int x){
	bool inc=0,dec=0;
	int last=x%10;
	for(x/=10;x;x/=10){
		if(x%10>last)inc=1;
		if(x%10<last)dec=1;
		last=x%10;
	}
	return inc && dec;
}

int main(){
	int i,num=0;
	for(i=100;i>0;i++){
		if(isBouncy(i)){
			num++;
		}
		if(100*num>=99*i){
			cout<<i<<endl;
			break;
		}
	}
}