#include <iostream>
using namespace std;
string b = "   ";
char k;
void backtrack(int i,int n){
	if(i==n){
		cout<<b<<endl;
		return;
	}
	else{
		for(char j = '0';j<=k;j++){
			b[i] = j;
			backtrack(i+1,n);
		}
	}
}

int main(){
	k = '3';
	backtrack(0,b.length());
	
	return 0;
}
