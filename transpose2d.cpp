#include <iostream>
using namespace std;

int main(){
	int a[3][3];
	int b[3][3];
	int count = 1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a[i][j] = count++;
		}
	}
	for(int i =0;i<3;i++){
		for(int j=0;j<3;j++){
			b[i][j] = a[j][i];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
