#include <iostream>
#include <cmath>
using namespace std;

double nthTerm(double input1,double input2,int input3){
	double r = input2/input1;
	int n = input3-1;
	double a = input1/r;
	double result = a*pow(r,n);
	//if(input2<0) result *=-1;
	result = result*1000.0/1000.0;
	return result;
}

int main(){
	cout<<nthTerm(1,2,4)<<endl;
	return 0;
}
