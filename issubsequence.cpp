#include <iostream>
//#include <string>
using namespace std;
int main(){
	string s = "axc";
	string t = "abghc";
	int l,r;
	l=r=0;
	while(l<s.length() && r<t.length()){
		if(s[l]==t[r]){
			l++;
			r++;
		}
		else r++;
	}
	if(l==s.length()) cout<<"1"<<endl;
	else cout<<"0"<<endl;
	return 0;
}
