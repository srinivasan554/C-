#include <iostream>
//#include <array>
#include <vector>
#include<string>
using namespace std;

int main() {
	string text;
	int n;
	cin>>n;
	std::vector<string> v;
	v.push_back("hello");
	v.push_back("to the");
	v.push_back("world of programming");
	for(int i=0;i<=n;i++){
		std::getline(std::cin,text); //but how this is happen:)
		v.push_back(text);
		//a[i] = text;
		//text = "\0";
	}
    
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}
