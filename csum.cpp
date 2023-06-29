#include<bits/stdc++.h>

using namespace std;

int count(int X){
	return ((X/2)+1);
}

int main(){
	int X;
	cin>>X;
	int result;
	result = count(X);
	cout<<result;
	return 0;
}
