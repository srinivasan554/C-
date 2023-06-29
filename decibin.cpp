#include <bits/stdc++.h>
using namespace std;

string deci_to_bin(int n,int size){
    string ans(size,'0');
    int i = size-1;
    while(n){
        ans[i] = n%2==0 ? '0' : '1';
        n /=2;
        i--;
    }

    return ans;
}

int main(){
	
	cout<<deci_to_bin(100,7)<<endl;
	return 0;
}
