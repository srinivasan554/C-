#include <iostream>
#include <string>
using namespace std;

int main(){
	string text = "a5b6c7";
	int num = 0;
	char c = '\0';
	for(int i = 0;i<text.length();i++){
		if((text[i]>=65 && text[i]<=90) || (text[i]>=97 && text[i]<=122)){
			if(c!='\0'){
			for(int j = 0;j<num;j++){
				cout<<c;
			}
		  }
		  c=text[i];
		  num =0;
		}

		else if(text[i]>=48 && text[i]<=57){
			num = num * 10 + static_cast<int>(text[i]-48);
		}
	}
	for(int x = 0;x<num;x++) cout<<c;
	cout<<endl;
    return 0;
}
