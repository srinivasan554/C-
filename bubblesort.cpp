#include <iostream>
using namespace std;
void bubblesort(int* a,int n){
	bool swapped = true;
	int temp;
	for(int pass = n-1;pass>=0;pass--){
		swapped = false;
		for(int i=0;i<=pass-1;i++){
			if(a[i]>a[i+1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
				swapped = true;
			}
		}
	}
}
void printarray(int* a,int size){
	for(int i = 0;i<size;i++){
		cout<<a[i]<<" ";
	}
}


int main(){
	int arr[] = {100,9,3,5,2,8,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,size);
	printarray(arr,size);
	cout<<endl;
	return 0;
}
