#include <iostream>
#include <string>
using namespace std;
void reverse(string& s,int start,int end){
	for(;start<end;start++,end--){
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}

int main(){
	string str= "find my reversal i am a sentence";
	int start = 0;
	int end = 0;
	for(;end<str.length();){
		if(str[end]!=32) end++;
		else{
			--end;
			reverse(str,start,end);
			end = end+2;
			start = end;
		}
	}
	--end;
	reverse(str,start,end);
	cout<<str<<endl;
	return 0;
}
