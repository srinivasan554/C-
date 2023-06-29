#include <iostream>
#include <string>

using namespace std;

void rev(string& s,int start,int end){
	for(;start<end;start++,end--){
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}

int main(){
	string text;
	std::getline(std::cin,text);
	int start,end;
	start = 0;
	end = text.length()-1;
	rev(text,start,end);
	start = end = 0;
	for(;end<text.length();){
		if(text[end]!=32){
			++end;
			//continue;
		}
		else{
			--end;
			rev(text,start,end);
			end = end + 2;
			start = end;
		}
	}
	cout<<text<<endl;
    return 0;

}
