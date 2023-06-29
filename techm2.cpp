#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int closestPair(int input1,int input2[]){
	int min=INT_MAX,temp;
	sort(input2,input2+input1);
	for(int i=0;i<=input1-2;++i){
		int j = i+1;
		if(j<input1) temp = sqrt(pow((input2[j]-input2[i]),2));
		if(temp<min) min = temp;
	}
	return min;
}


int main(){
	int a[3] = {-10,0,11};
	//int a[5] = {10,2,-4,5,29};
	cout<<closestPair(3,a)<<endl;
	return 0;
}
