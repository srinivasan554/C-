#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int n;
	char buffer[100];
	cin>>n;
	cout<<"the binary number of "<<n<<"is ";
	itoa(n,buffer,2);
	cout<<buffer<<endl;
	return 0;
}
