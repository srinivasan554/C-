#include <bits/stdc++.h>
using namespace std;


int count(int N){
	int c = 0;
	int temp,sum;
	for(int i=1;i<=N;i++){
		temp = i;
		sum = 0;
		while(temp!=0){
			sum = (sum * 10) + (temp % 10);
			temp/=10;
		}
	if(sum%2==0) ++c;
	}
	if(N>800) return c+32;
	return c+16;
}

int main(){
	int N;
	cin>>N;
	int result;
	result = count(N);
	cout<<result<<endl;
	return 0;
}
