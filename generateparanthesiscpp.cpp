#include <iostream>
using namespace std;

void generate(string s,int n,int open,int close){
	if(open>n) return;
	if(open == n && close == 0){
		cout<<s<<endl;
		return;
	}
	if(open<n){
		generate(s+'(',n,open+1,close+1);
	}
	if(close>0){
		generate(s+')',n,open,close-1);
	}
}
int main(){
	string s = "";
	generate(s,3,0,0);
	return 0;
}
