#include <iostream>
using namespace std;

int main(){
	int a[20] = {1,3,4,6};
	int b[10] = {2,5,7,8};
	int n = 4;
	int i;
	for(int j=0;j<n;j++){
		int r = b[j];
		for(i=n-1;(i>=0 && a[i]>r);i--){
			a[i+1] = a[i];
		}
		a[i+1] = r;
		++n;
		
	}
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
