#include <iostream>
using namespace std;

string a = "   ";

void generate(int n){
	if(n==0){
		cout<<a<<endl;
		return;
	}
	a[n-1] = '0';
	generate(n-1);
	a[n-1] = '1';
	generate(n-1);
}

int main(){
	generate(3);
	return 0;
}
