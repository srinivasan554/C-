#include <iostream>
using namespace std;

int fun(int n){
	if(n==1) return 0;
	for(int i=2;i<=n;i++){
		if(n%i==0){
			n = n - i;
			break;
		}
	}
	return n;
}

int main(){
	int n = 3;
	cout<<fun(n)<<endl;
	return 0;
}
