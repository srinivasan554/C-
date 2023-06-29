#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int count = 0;
	int n =277;
	for(int i=1;i<=sqrt(n);i++){
		if(n % i==0){
			if(n/i != i) count +=2;
			else count +=1;
		}
	}
	cout<<count<<endl;
	return 0;
}
