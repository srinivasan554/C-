#include <iostream>
using namespace std;

int main(){
	int n = 10;
	int a = 0;
	int b = 1;
	int c;
	cout<<b<<" ";
	while(n--){
		c = a+b;
		cout<<c<<" ";
		a = b;
		b = c;
	}
	return 0;
}
