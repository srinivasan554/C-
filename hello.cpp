#include <iostream>
using namespace std;

int main(){
	string text;
	std::getline(std::cin,text,'*');
	cout<<text;
	return 0;
}
