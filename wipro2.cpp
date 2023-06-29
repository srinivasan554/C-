#include <iostream>
using namespace std;

int main(){
	int size;
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++){
		int n;
		cin>>n;
		a[i] = n;
	}
	int maxprodid = 0;
	for(int i=0;i<size;i++){
		if(a[i]>maxprodid){
			maxprodid = a[i];
		}
	}
	int stock[maxprodid];
	for(int i = 0;i<maxprodid;i++){
		stock[i] = 0;
	}
	for(int i = 0;i<size;i++){
		++stock[a[i]];
	}
	int minstock = INT_MAX;
	int maxstock = INT_MIN;
	for(int i=0;i<maxprodid;i++){
		if(stock[i]<minstock){
			minstock = stock[i];
		}
		if(stock[i]>maxstock){
			maxstock = stock[i];
		}
	}
	cout<<maxstock - minstock<<endl;
	return 0;
}