#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(k>0){
		for(int i=0;i<n;i++){
			int j = i+1;
			int count = 0;
			int sum = 0;
			while(count<k){
				if(j==n) j = 0;
				else if(j<n){
					sum = sum + a[j];
					++j;
					++count;
				} 
			}
		b[i] = sum;
		
	}
	for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
	}
	//if k is negative
	else{
		k = k * -1;
		for(int i = 0;i<n;i++){
			int j = i-1;
			int count = 0;
			int sum = 0;
			while(count<k){
				if(j==-1) j= n-1;
				else if(j<n){
					sum = sum + a[j];
					--j;
					++count;
				}
			}
			b[i] = sum;
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" "; 
		}
	}
	return 0;
}
