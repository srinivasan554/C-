#include <iostream>
using namespace std;

int main(){
	int a = 0x01;
	int b = 0x03;
	int c = a || b | b;//bitwise operators has highest precedence
	cout<<c<<endl;
	return 0;
}
