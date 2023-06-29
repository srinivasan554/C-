#include <iostream>
using namespace std;
long ncr(long n,long r);
long fact(long val);

long ncr(long n,long r){
	return fact(r)*fact(n-r);
}

long fact(long val){
	if(val==0) return 1;
	for(int i = val-1;i>=1;i--){
		val = val * i;
	}
	return val;
}

int main(){
	long n = 30;
	long r = 2;
	//cout<<fact(5)<<endl;
	cout<<ncr(n,r)<<endl;
	return 0;
}
