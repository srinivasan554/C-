#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x = 66;
	cout<<std::setbase(16)<<std::left<<std::showbase<<setw(8)<<setfill('0')<<x<<endl;
	return 0;
}
