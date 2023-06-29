#include <iostream>
using namespace std;

int main(){
	int a = 2;
	int fact = 7;
	int n = 14;
	while(n--){
		cout<<a<<" ";
		a += fact;
	}
	return 0;
}