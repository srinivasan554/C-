#include <iostream>
using namespace std;

int main(){
	int N,I,X;
	cin>>N>>I>>X;
	int count = 1;
	for(int i = I;i<N;){
		i = i + X;
		if(i>N){
			break;
		}
		else{
			++count;
			i = (i - X) + 1;
		}
	}
	cout<<count<<endl;
	return 0;
}
