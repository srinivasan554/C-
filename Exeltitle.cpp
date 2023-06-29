#include <iostream>
using namespace std;
string convertToTitle(int A) {

    if(A<=0) return "";

    if(A>=1 && A<=26){
        char c = 'A';
        return ""+c;
    }

    string ans = convertToTitle(A/26) + convertToTitle(A%26);

    return ans;
}

int main(){
	string c = to_string('A');
	cout<<c<<endl;
	//cout<<convertToTitle(10)<<endl;
}
    
